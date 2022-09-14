CFLAGS = -I. -I../.. -std=c++11

SRC = \
	Observer.cpp \
	BarChartObserver.cpp \
	DigitObserver.cpp \
	Subject.cpp \
	NumberSubject.cpp \
	main.cpp

PROG = observer.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
