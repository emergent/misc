CC = gcc
DEFINE=
INCLUDE=
CFLAGS=-Wall -Werror -pedantic-errors
LDFLAGS=

TARGET = hello

.PHONY: all
all: $(TARGET)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -rf *.o *~ $(TARGET)
