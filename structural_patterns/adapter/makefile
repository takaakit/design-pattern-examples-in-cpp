CFLAGS = -I. -I../.. -std=c++11

SRC = \
	MessageDisplay.cpp \
	Print.cpp \
	PrintMessageDisplay.cpp \
	main.cpp

PROG = adapter.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
