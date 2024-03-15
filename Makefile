build:
	@ for DIR in $$(find src -iname "Makefile"); do \
		$(MAKE) -C $$(dirname $$DIR); \
	done
	gcc main.c $$(find src -iname "*.c") -o llmi -I src
	