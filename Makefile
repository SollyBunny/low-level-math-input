
build_pc:
	$(MAKE) SCREEN=term BRIDGE=term build/llmi_pc

build_esp32:
	$(MAKE) SCREEN=ILI9341 BRIDGE=serial SERIAL=arduino build/llmi_mc

build/llmi_pc: src/main.c
	gcc src/main.c -o build/llmi_pc_$(SCREEN)_$(BRIDGE) -I src -DSCREEN_$(SCREEN) -DBRIDGE_$(BRIDGE)

build/llmi_mc: build/arduino.ino_
	gcc build/arduino.c -o build/llmi_mc_$(SCREEN)_$(BRIDGE) -I src -DSCREEN_$(SCREEN) -DBRIDGE_$(BRIDGE)

build/arduino.ino_: ./combine_arduino.py
	python ./combine_arduino.py -DDEVICE -DSCREEN_$(SCREEN) -DBRIDGE_$(BRIDGE)

font:
	$(MAKE) -C ./src/font/