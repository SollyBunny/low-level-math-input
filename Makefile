
build_pc:
	$(MAKE) SCREEN=term BRIDGE=term INPUT=term build/llmi_pc

build_pc_debug:
	$(MAKE) SCREEN=term BRIDGE=term INPUT=term build/llmi_debug

build_esp32:
	$(MAKE) SCREEN=ILI9341 BRIDGE=arduino SERIAL=arduino INPUT=arduino build/llmi_mc

build/llmi_debug: src/main.c
	gcc src/main.c -o build/llmi_debug_$(SCREEN)_$(BRIDGE) -I src -DSCREEN_$(SCREEN) -DBRIDGE_$(BRIDGE) -DINPUT_$(INPUT) -ggdb3 -fsanitize=address -DDEBUG

build/llmi_pc: src/main.c
	gcc src/main.c -o build/llmi_pc_$(SCREEN)_$(BRIDGE) -I src -DSCREEN_$(SCREEN) -DBRIDGE_$(BRIDGE) -DINPUT_$(INPUT)

build/llmi_mc: build/arduino.ino_
	cat build/arduino.ino | xclip -selection clipboard
	@echo "Copied to clipboard"

build/arduino.ino_: ./combine_arduino.py
	python ./combine_arduino.py -DSCREEN_$(SCREEN) -DBRIDGE_$(BRIDGE) -DINPUT_$(INPUT)

font:
	$(MAKE) -C ./src/font/