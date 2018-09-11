CFLAGS = -I. -I../.. -std=c++11

SRC = \
	AbstractDisplay.cpp \
	CharDisplay.cpp \
	StringDisplay.cpp \
	main.cpp

PROG = template_method.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
