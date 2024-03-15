#!/bin/env python3

with open("./out.txt") as file:
    data_txt = file.read()

def txt2src(line):
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
data_txt = [[i[0], *[txt2src(j) for j in i[1:]]] for i in data_txt]
print(data_txt)