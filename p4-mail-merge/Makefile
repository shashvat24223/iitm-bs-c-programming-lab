.SILENT:
.PHONY: test

CC=gcc
INC=-I inc
DEPS=$(wildcard inc/* src/*) 
SRC=$(wildcard src/*)

all: main
main: ${DEPS}
	${CC} ${INC} ${SRC} -o mail-merge-results

test_%:
	${CC} ${INC}  $(filter-out src/main.c, ${SRC}) test/$@.c -o temp && ./temp
	rm temp