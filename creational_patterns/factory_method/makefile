CFLAGS = -I. -I../.. -std=c++11

SRC = \
	framework/Factory.cpp \
	framework/Product.cpp \
	credit_card/CreditCard.cpp \
	credit_card/CreditCardFactory.cpp \
	main.cpp

PROG = factory_method.exe

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
