CFLAGS = -I. -I../.. -std=c++11

SRC = \
	Builder.cpp \
	Director.cpp \
	HTMLBuilder.cpp \
	PlainTextBuilder.cpp \
	main.cpp

PROG = builder.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
