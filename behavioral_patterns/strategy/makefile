CFLAGS = -I. -I../.. -std=c++11

SRC = \
	Hand.cpp \
	Player.cpp \
	Strategy.cpp \
	StrategyA.cpp \
	StrategyB.cpp \
	main.cpp

PROG = strategy.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
