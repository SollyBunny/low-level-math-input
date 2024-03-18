#!/bin/env python

# Combines everything into a single ino file

DEFINITIONS = []

import sys
for arg in sys.argv[1:]:
	if arg.startswith("-D"):
		DEFINITIONS.append(arg[2:])
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
	for i, line in enumerate(data):
		if "#include" in line:
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
				print("Warn, invalid include", path, line)
				continue
			try:
				newData = parseFile(newPath)
			except FileNotFoundError:
				print("Skipping", path, "->", newPath, line)
				continue
			data[i] = newData
	return "\n".join(data)

data = ""

data += "\n".join(f"#define {i}" for i in DEFINITIONS) + "\n"
data += parseFile(SRC + ENTRY)
data += "\nvoid setup() { main(); }\nvoid loop() {}\n"

with open(OUT, "w") as file:
	file.write(data)