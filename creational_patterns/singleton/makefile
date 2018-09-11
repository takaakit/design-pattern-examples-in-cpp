CFLAGS = -I. -I../.. -std=c++11

SRC = \
	Singleton.cpp \
	main.cpp

PROG = singleton.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
