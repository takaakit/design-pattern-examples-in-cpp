CFLAGS = -I. -I../.. -std=c++11

SRC = \
	BarChartObserver.cpp \
	DigitObserver.cpp \
	Number.cpp \
	Observer.cpp \
	RandomNumber.cpp \
	main.cpp

PROG = observer.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
