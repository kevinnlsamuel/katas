.PHONY: build test
name := palnum

BATS ?= $(shell git rev-parse --show-toplevel)/bats/bats/bin/bats

test: $(name)
	MAIN=./$(name) $(BATS) test/
build: $(name)

$(name): main.c solution.c
	$(CC) -g -o $(name) main.c -lm
