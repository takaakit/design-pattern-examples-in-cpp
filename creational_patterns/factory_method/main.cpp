#include <iostream>
#include <memory>
#include "creational_patterns/factory_method/credit_card/CreditCardFactory.h"
#include "creational_patterns/factory_method/credit_card/CreditCard.h"

using namespace std;

// Factory to make ID cards.

int main(int argc, char* argv[]) {
	unique_ptr<CreditCardFactory> factory(new CreditCardFactory());

	shared_ptr<Product> jackson_card(factory->create("Jacson"));
	jackson_card->use();

	shared_ptr<Product> sophia_card(factory->create("Sophia"));
	sophia_card->use();

	shared_ptr<Product> olivia_card(factory->create("Olivia"));
	olivia_card->use();

	return 0;
}
