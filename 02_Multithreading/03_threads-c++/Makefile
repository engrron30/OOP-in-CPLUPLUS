CC = g++
CPPFILES += main.cpp
OUTPUT = threads-test

CPPFLAGS += -lpthread

.PHONY: all clean
all:
	$(CC) $(CPPFILES) -o $(OUTPUT) $(CPPFLAGS)

clean:
	rm -rf $(OUTPUT)
