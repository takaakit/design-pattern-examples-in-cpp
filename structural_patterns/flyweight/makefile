CFLAGS = -I. -I../.. -std=c++11

SRC = \
	LargeSizeChar.cpp \
	LargeSizeCharFactory.cpp \
	LargeSizeString.cpp \
	main.cpp

PROG = flyweight.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
