CFLAGS = -I. -I../.. -std=c++11

SRC = \
	HandSignal.cpp \
	Player.cpp \
	Strategy.cpp \
	MirrorStrategy.cpp \
	RandomStrategy.cpp \
	main.cpp

PROG = strategy.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
