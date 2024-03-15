build: build_font2png build_png2txt build_txt2src

build_font2png: out.fnt
out.fnt: *.ttf ./ttf2png.py
	python ./ttf2png.py

build_png2txt: out.txt
out.txt: out.fnt ./png2txt.py
	python ./png2txt.py

build_txt2src: font.h
font.h: out.txt ./txt2src.py
	python ./txt2src.py
	cp font.h ../font.h

clean:
	rm out*.png
	rm out.fnt
	rm out.txt
	rm font.h