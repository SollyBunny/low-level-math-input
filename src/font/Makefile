build: build_font2png build_png2txt build_txt2src

build_font2png: out.fnt
out.fng: *.ttf
	./fontbmutil/fontbm --font-file *.ttf --chars-file chars.txt --extra-info --output out

build_png2txt: out.txt
out.txt: out.fnt
	python ./compile.py

build_txt2src: