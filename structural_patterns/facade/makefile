CFLAGS = -I. -I../.. -std=c++11

SRC = \
	DataLibrary.cpp \
	HtmlWriter.cpp \
	PageCreator.cpp \
	main.cpp

PROG = facade.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
