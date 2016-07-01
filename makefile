# the compiler to use.
CC=gcc

all: hello

arraylist: main.o factorial.o hello.o
    $(CC) main.o factorial.o hello.o -o hello

clean:
    rm *o hello

