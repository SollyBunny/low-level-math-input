build: build_font2png build_png2txt build_txt2src

build_font2png: out.fnt
out.fnt: *.ttf
	python ./ttf2png.py

build_png2txt: out.txt
out.txt: out.fnt
	python ./png2txt.py

build_txt2src: font.h
font.h: out.txt:
	python ./txt2src.py
	cp font.h ../font.h