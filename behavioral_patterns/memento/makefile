CFLAGS = -I. -I../.. -std=c++11

SRC = \
	Gamer.cpp \
	Memento.cpp \
	main.cpp

PROG = memento.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
