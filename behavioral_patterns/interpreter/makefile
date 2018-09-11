CFLAGS = -I. -I../.. -std=c++11

SRC = \
	Action.cpp \
	Command.cpp \
	CommandList.cpp \
	Context.cpp \
	Node.cpp \
	Program.cpp \
	Repeat.cpp \
	main.cpp

PROG = interpreter.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
