CFLAGS = -I. -I../.. -std=c++11

SRC = \
	Directory.cpp \
	Element.cpp \
	File.cpp \
	FileSystemElement.cpp \
	ListVisitor.cpp \
	Visitor.cpp \
	main.cpp

PROG = visitor.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
