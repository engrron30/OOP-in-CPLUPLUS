CC = g++
CPPFILES += main.cpp
OUTPUT = singleton-test

CPPFLAGS += -lpthread

.PHONY: all clean
all:
	$(CC) $(CPPFILES) -o $(OUTPUT) $(CPPFLAGS)

clean:
	rm -rf $(OUTPUT)
