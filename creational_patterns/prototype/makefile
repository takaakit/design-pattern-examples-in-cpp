CFLAGS = -I. -I../.. -std=c++11

SRC = \
	framework/Display.cpp \
	framework/Manager.cpp \
	FrameDisplay.cpp \
	UnderlineDisplay.cpp \
	main.cpp

PROG = prototype.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
