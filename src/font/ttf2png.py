#!/bin/env python3

import os

with open("./chars.txt", "r") as file:
    data_chars = file.read()

data_chars = data_chars.split("\n")
data_chars = [i.split(" ") for i in data_chars if " " in i]
data_chars.sort(key = lambda c: ord(c[1]))

with open("./chars_tmp.txt", "w") as file:
    file.write("".join(i[1] for i in data_chars))

res = os.system("./fontbmutil/fontbm --font-file *.ttf --chars-file chars_tmp.txt --extra-info --output out")
if res != "0":
    print(res)
os.remove("./chars_tmp.txt")

with open("./out.fnt", "r") as file:
    data_txt = file.read()

data_txt = data_txt.split("\n")
j = 0
out = ""
for i in data_txt:
    if not i.startswith("char id"):
        out += i + "\n"
    else:
        out += i + " name=" + data_chars[j][0] + "\n"
        j += 1

with open("./out.fnt", "w") as file:
    file.write(out)
