CFLAGS = -I. -I../.. -std=c++11

SRC = \
	Aggregate.cpp \
	Book.cpp \
	BookShelf.cpp \
	BookShelfIterator.cpp \
	Iterator.cpp \
	main.cpp

PROG = iterator.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
