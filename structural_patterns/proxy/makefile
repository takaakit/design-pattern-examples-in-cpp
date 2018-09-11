CFLAGS = -I. -I../.. -std=c++11

SRC = \
	Printer.cpp \
	PrinterProxy.cpp \
	RealPrinter.cpp \
	main.cpp

PROG = proxy.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
