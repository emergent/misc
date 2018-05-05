CC = gcc
DEFINE=
INCLUDE=
CFLAGS=-Wall -Werror -pedantic-errors #-g
LDFLAGS=

TARGET = chars

.PHONY: all
all: $(TARGET)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -rf *.o *~ $(TARGET)
