.PHONY: build test
name := average_pair

BATS ?= $(shell git rev-parse --show-toplevel)/bats/bats/bin/bats

test: $(name)
	MAIN=$(realpath $(name)) $(BATS) test/
build: $(name)

$(name): main.c solution.c
	$(CC) -g -o $(name) main.c
