CFLAGS = -I. -I../.. -std=c++11

SRC = \
	factory/Data.cpp \
	factory/Factory.cpp \
	factory/Item.cpp \
	factory/Link.cpp \
	factory/Page.cpp \
	list_factory/ListData.cpp \
	list_factory/ListFactory.cpp \
	list_factory/ListLink.cpp \
	list_factory/ListPage.cpp \
	table_factory/TableData.cpp \
	table_factory/TableFactory.cpp \
	table_factory/TableLink.cpp \
	table_factory/TablePage.cpp \
	main.cpp

PROG = abstract_factory.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
