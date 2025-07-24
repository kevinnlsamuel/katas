.PHONY: build
name ?= $(PWD)

BATS ?= $(shell git rev-parse --show-toplevel)/bats/bin/bats

test: $(name)
	$(BATS) test/
build: $(name)

$(name): main.c
	$(CC) -o $(name) main.c
main.c: %.h
