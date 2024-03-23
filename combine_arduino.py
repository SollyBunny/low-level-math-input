#!/bin/env python

# Combines everything into a single ino file

import sys, os

defs = {}

for arg in sys.argv[1:]:
	if arg.startswith("-D"):
		defs[arg[2:]] = ""
	else:
		print("Error: Invalid argument", arg)
		sys.exit(1)

SRC = "./src/"
ENTRY = "main.c"
OUT = "./build/arduino.ino"

def parseFile(path):
	with open(path, "r") as file:
		data = file.read()
	data = data.split("\n")
	infalseif = 0
	for i, line in enumerate(data):
		if infalseif > 0:
			data[i] = ""
			if "#if" in line:
				infalseif += 1
			elif "#endif" in line:
				infalseif -= 1
			elif infalseif == 1 and "#else" in line:
				infalseif = 0
			continue
		if "#define " in line:
			content = line.partition("#define ")[-1].partition(" ")
			defs[content[0]] = content[1]
		elif "#undef " in line:
			content = line.partition("#undef ")[-1]
			if content in defs:
				del defs[content]
		elif "#ifdef " in line:
			data[i] = ""
			content = line.partition("#ifdef ")[-1]
			print(content, "in", defs, line, i)
			if content not in defs:
				infalseif += 1
		elif "#ifndef " in line:
			data[i] = ""
			content = line.partition("#ifndef ")[-1]
			# print(content, "not in", defs, line, i)
			if content in defs:
				infalseif += 1
		elif "#else" in line:
			data[i] = ""
			infalseif += 1
		elif "#endif" in line:
			data[i] = ""
		elif "#include" in line:
			if "<" in line:
				if ">" not in line:
					print("Warn, missing > in", path, line)
					continue
				newPath = SRC + line[line.index("<") + 1:line.index(">")]
			elif "\"" in line:
				if line.count("\"") != 2:
					print("Warn, wrong \" in", path, line)
					continue
				newPath = "".join(path.rpartition("/")[:-1]) + line[line.index("\"") + 1:line.index("\"", line.index("\"") + 1)]
			else:
				print("Warn, invalid include", path, line, end = "")
				continue
			try:
				print("Parsing", path, "->", newPath, line)
				newData = parseFile(newPath)
			except FileNotFoundError:
				print("Skipped")
				continue
			data[i] = newData
	data = tuple(filter(None, data))
	if len(data) == 0: return f"// Ignored {path}"
	return f"// Start {path}\n" + "\n".join(data) + f"\n// End {path}"

data = ""

data += "\n".join(f"#define {i}" for i in defs) + "\n"
data += parseFile(SRC + ENTRY)
data += "\nvoid setup() { main(); }\nvoid loop() {}\n"

with open(OUT, "w") as file:
	file.write(data)