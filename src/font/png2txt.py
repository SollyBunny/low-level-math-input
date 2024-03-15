#!/bin/env python3

from PIL import Image

with open("out.fnt", "r") as file:
    data_txt = file.read()
with Image.open("out_0.png") as img:
    data_img = img.getdata()
    data_img_w, data_img_w = img.size

data_txt = data_txt.split("\n")
data_txt = (dict(j.split("=") for j in i.split(" ") if "=" in j) for i in data_txt if i.startswith("char id"))
out = ""
for c in data_txt:
    out += f"{c['name']} {c['width']} {c['height']} {c['xoffset']} {int(c['xadvance']) - int(c['width'])} {c['yoffset']} {0}\n"
    for y in range(int(c["y"]), int(c["y"]) + int(c["height"])):
        line = ""
        for x in range(int(c["x"]), int(c["x"]) + int(c["width"])):
            px = data_img[data_img_w * y + x]
            px = px[0] * px[1] * px[2] * px[3]
            if px > 128:
                line += "##"
            else:
                line += "  "
        out += (line or "_") + "\n"
    out += "\n"

with open("out.txt", "w") as file:
    file.write(out)
