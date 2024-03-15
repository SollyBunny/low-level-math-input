#!/bin/env python3

import os

files = os.listdir()
files = filter(lambda f: f.endswith(".txt"), files)
files = list(files)

print("Compiling", ", ".join(files))

for file in files:
    data = ""
    with open(file, "r") as p:
        data = p.read()
    print(data)
    data = data.split("\n")
    print(data)