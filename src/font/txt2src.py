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
data_txt = [[i[0][0], [int(j) for j in i[0][1:]], i[1]] for i in data_txt]
i = 0

out_data = ""
out_defines = ""
for c in data_txt:
    out_defines += f"#define CHAR_{c[0]} {i}\n"
    out_defines += f"#define GLYPH_{c[0]} glyphs[CHAR_{c[0]}]\n"
    data = ",".join(str(i) for i in c[2])
    out_data += f"[CHAR_{c[0]}] = {{.w={int(c[1][0]) + int(c[1][2]) + int(c[1][3])}, .h={int(c[1][1]) + int(c[1][4]) + int(c[1][5])}, .padleft={c[1][2]}, .padright={c[1][3]}, .padtop={c[1][4]}, .padbottom={c[1][5]}, .b={{.w={c[1][0]}, .h={c[1][1]}, .data={{{data}}}}}}},\n"
    i += 1
print(data_txt)

with open("font.h", "w") as file:
    file.write(f"""#ifndef INCLUDE_FONT_H
#define INCLUDE_FONT_H

#include <glyph.h>

{out_defines}
Glyph glyphs[] = {{
{out_data}
}};

#endif""")