CFLAGS = -I. -I../.. -std=c++11

SRC = \
	Display.cpp \
	Frame.cpp \
	FullFrame.cpp \
	MessageDisplay.cpp \
	SideFrame.cpp \
	main.cpp

PROG = decorator.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
