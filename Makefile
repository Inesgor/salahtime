TARGET = salahtime
CC = clang
CFLAGS = -std=c11 -Wall -Werror -Wpointer-arith -Wstrict-prototypes -Wmissing-prototypes -Wshadow -Wcast-qual -Wcast-align -Wconversion -Wextra -Wmissing-declarations -Wwrite-strings -Wredundant-decls -Wnested-externs -Winline -Wfloat-equal -Wundef -Wunreachable-code -Wstrict-overflow=5 -Wformat-nonliteral -Wuninitialized -Winit-self -ftrapv -fstack-protector-all -O2

OBJECTS = $(wildcard *.c)
HEADERS = $(wildcard *.h)

all: $(TARGET)

program: $(TARGET).o

program.o: $(OBJECTS) $(HEADERS)

clean:
	-rm -f *.o
	-rm -f $(TARGET)
