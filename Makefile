.SUFFIXES:

.PHONY: all

all: main

.PHONY: run
run: all
	./main

SOURCES := $(wildcard *.c */*.c)
OBJECTS := $(patsubst %.c,%.o,$(SOURCES))
DEPS    := $(patsubst %.c,%.d,$(SOURCES))

-include $(DEPS)
main: $(OBJECTS)

main:
	gcc -g -Wall -o main $(^)

%.o: %.c
	gcc -g -Wall -MMD -MP -c -o $(@) $(<)

clean:
	rm -f main \
    $(OBJECTS) \
    $(DEPS)

