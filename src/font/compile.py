#!/bin/env python3

from PIL import Image

with open("out.fnt") as file:
    data_txt = file.read()
with Image.open("out_0.png") as img:
    data_img = img.getdata()
    data_img_w, data_img_w = img.size

data_txt = data_txt.split("\n")
for line in data_txt:
    if not line.startswith("char id")

print(data_img[0], data_img_w)
print(data_txt)