CFLAGS = -I. -I../.. -std=c++11

SRC = \
	Directory.cpp \
	File.cpp \
	FileSystemElement.cpp \
	main.cpp

PROG = composite.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
