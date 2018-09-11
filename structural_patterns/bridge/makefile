CFLAGS = -I. -I../.. -std=c++11

SRC = \
	Display.cpp \
	DisplayImpl.cpp \
	MultiLineDisplay.cpp \
	TextDisplayImpl.cpp \
	main.cpp

PROG = bridge.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
