#include <iostream>
#include <memory>
#include "creational_patterns/factory_method/credit_card/CreditCardFactory.h"
#include "creational_patterns/factory_method/credit_card/CreditCard.h"

using namespace std;

/*
The subject is a factory to make credit cards. The Factory defines how to create an credit card,
but the actual credit card is created by the CreditCardFactory.
The "createProduct()" is called a Factory Method, and it is responsible for manufacturing an object.
 */

int main(int argc, char* argv[]) {
	unique_ptr<CreditCardFactory> factory(new CreditCardFactory());

	unique_ptr<const Product> jackson_card(factory->create("Jacson"));
	jackson_card->use();

	unique_ptr<const Product> sophia_card(factory->create("Sophia"));
	sophia_card->use();

	unique_ptr<const Product> olivia_card(factory->create("Olivia"));
	olivia_card->use();

	return 0;
}
