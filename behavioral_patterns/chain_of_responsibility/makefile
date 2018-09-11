CFLAGS = -I. -I../.. -std=c++11

SRC = \
	LazySupporter.cpp \
	LimitedSupporter.cpp \
	MoodySupporter.cpp \
	SpecialSupporter.cpp \
	Supporter.cpp \
	Trouble.cpp \
	main.cpp

PROG = chain_of_responsibility.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
