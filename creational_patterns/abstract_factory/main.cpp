#include <iostream>
#include <memory>
#include "creational_patterns/abstract_factory/factory/Factory.h"
#include "creational_patterns/abstract_factory/factory/Link.h"
#include "creational_patterns/abstract_factory/factory/Data.h"
#include "creational_patterns/abstract_factory/factory/Page.h"
#include "creational_patterns/abstract_factory/list_factory/ListFactory.h"
#include "creational_patterns/abstract_factory/table_factory/TableFactory.h"

using namespace std;

/*
The subject is a factory to make credit cards. The abstract class("Factory") defines how to create an credit card, but the actual credit card is created by the concrete class("CreditCardFactory"). "createProduct()" is called a Factory Method, and it is responsible for manufacturing an object.
 */

int main(int argc, char* argv[]) {
	cout << "Please enter a number (1 or 2):" << endl
		<< "  1: Create objects by using ListFactory" << endl
		<< "  2: Create objects by using TableFactory" << endl;
	int number = 0;
	cin >> number;

	shared_ptr<Factory> factory;
	if (number == 1) {
		factory = shared_ptr<Factory>(new ListFactory());
	}
	else if (number == 2) {
		factory = shared_ptr<Factory>(new TableFactory());
	}
	else {
		cerr << "The value is not 1 or 2." << endl;
		exit(1);
	}

	shared_ptr<Link> washington_post(factory->createLink("The Washington Post", "https://www.washingtonpost.com/"));
	shared_ptr<Link> new_york_times(factory->createLink("The NewYork Times", "https://www.nytimes.com/"));
	shared_ptr<Link> financial_times(factory->createLink("The Financial Times", "https://www.ft.com/"));

	shared_ptr<Data> newspaper(factory->createData("Newspaper"));
	newspaper->add(washington_post.get());
	newspaper->add(new_york_times.get());
	newspaper->add(financial_times.get());

	shared_ptr<Link> yahoo(factory->createLink("Yahoo!", "https://www.yahoo.com/"));
	shared_ptr<Link> google(factory->createLink("Google", "https://www.google.com/"));

	shared_ptr<Data> search_engine(factory->createData("Search engine"));
	search_engine->add(yahoo.get());
	search_engine->add(google.get());

	shared_ptr<Page> link_page(factory->createPage("LinkPage", "James Smith"));
	link_page->add(newspaper.get());
	link_page->add(search_engine.get());

	link_page->output();

	return 0;
}
