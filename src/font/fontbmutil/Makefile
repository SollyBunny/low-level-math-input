build: build_cmake build_make

build_cmake: ./src/CMakeLists.txt
	cmake -S ./src -B ./build
	mv ./build/Makefile ./build/_Makefile

build_make: ./build/Makefile
	make -C ./build/_Makefile
	cp ./build/fontbm ./fontbm
	chmod +x ./fontbm
