#!/bin/env python3

with open("./out.txt") as file:
    data_txt = file.read()

def txt2src(line):
    if "_" in line: return 0
    line = line[::2]
    out = 0
    val = 1
    for i in line:
        if i != " ":
            out += val
        val <<= 1
    return out

data_txt = data_txt.split("\n\n")
data_txt = [i.split("\n") for i in data_txt if len(i) > 1]
data_txt = [[i[0].split(" "), [txt2src(j) for j in i[1:]]] for i in data_txt]
data_txt = [[i[0][0], int(i[0][1]), [int(j) for j in i[0][2:]], i[1]] for i in data_txt]

# special case
data_txt.append([
    "space", ord(" "),
    [0, 0, int(data_txt[0][2][0]) + int(data_txt[0][2][2]) + int(data_txt[0][2][4]), int(data_txt[0][2][1]) + int(data_txt[0][2][3]) + int(data_txt[0][2][5]), 0, 0],
    []
])
data_txt.append([
    "tab", ord("\t"),
    [0, 0, (int(data_txt[0][2][0]) + int(data_txt[0][2][2]) + int(data_txt[0][2][4])) * 4, int(data_txt[0][2][1]) + int(data_txt[0][2][3]) + int(data_txt[0][2][5]), 0, 0],
    []
])

out_data = ["NULL" for i in range(1 + max(data_txt, key = lambda c: int(c[1]))[1])]
out_defines = ""
for c in data_txt:
    out_defines += f"#define CHAR_{c[0]} {c[1]}\n"
    data = ",".join(str(j) for j in c[3])
    out_defines += f"struct Glyph GLYPH_{c[0]} = {{.w={int(c[2][0]) + int(c[2][2]) + int(c[2][3])}, .h={int(c[2][1]) + int(c[2][4]) + int(c[2][5])}, .padleft={c[2][2]}, .padright={c[2][3]}, .padtop={c[2][4]}, .padbottom={c[2][5]}, .b={{.w={c[2][0]}, .h={c[2][1]}, .data={{{data}}}}}}};\n"
    out_data[c[1]] =  f"&GLYPH_{c[0]}"

with open("font.h", "w") as file:
    file.write(f"""#ifndef INCLUDE_FONT_H
#define INCLUDE_FONT_H

#include "glyph.h"

{out_defines}
struct Glyph *glyphs[] = {{
{",".join(out_data)}
}};

#endif""")