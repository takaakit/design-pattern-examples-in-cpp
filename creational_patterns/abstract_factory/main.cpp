#include <iostream>
#include <memory>
#include "creational_patterns/abstract_factory/factory/Factory.h"
#include "creational_patterns/abstract_factory/factory/Link.h"
#include "creational_patterns/abstract_factory/factory/Data.h"
#include "creational_patterns/abstract_factory/factory/Page.h"

using namespace std;

// Create a hierarchical link collection as an HTML file.

int main(int argc, char* argv[]) {
	if (argc != 2) {
		cout << "Usage: a.exe class.name.of.ConcreteFactory" << endl;
		cout << "Ex.1 : abstract_factory.exe ListFactory" << endl;
		cout << "Ex.2 : abstract_factory.exe TableFactory" << endl;
	}
	else {
		shared_ptr<Factory> factory = Factory::getFactory(argv[1]);

		shared_ptr<Link> washington_post = factory->createLink("The Washington Post", "https://www.washingtonpost.com/");
		shared_ptr<Link> new_york_times = factory->createLink("The NewYork Times", "https://www.nytimes.com/");
		shared_ptr<Link> financial_times = factory->createLink("The Financial Times", "https://www.ft.com/");
		shared_ptr<Link> yahoo = factory->createLink("Yahoo!", "https://www.yahoo.com/");
		shared_ptr<Link> google = factory->createLink("Google", "https://www.google.com/");
		shared_ptr<Link> mlb = factory->createLink("MLB", "https://www.mlb.com/");
		shared_ptr<Link> fifa = factory->createLink("FIFA", "https://www.fifa.com/");
		shared_ptr<Link> wba = factory->createLink("WBA", "http://www.wbaboxing.com/");
		shared_ptr<Link> wbc = factory->createLink("WBC", "http://www.wbcboxing.com/");

		shared_ptr<Data> newspaper = factory->createData("Newspaper");
		newspaper->add(washington_post);
		newspaper->add(new_york_times);
		newspaper->add(financial_times);

		shared_ptr<Data> search_engine = factory->createData("Search engine");
		search_engine->add(yahoo);
		search_engine->add(google);

		shared_ptr<Data> sports = factory->createData("Sports");
		sports->add(mlb);
		sports->add(fifa);
		sports->add(wba);
		sports->add(wbc);

		shared_ptr<Page> link_page = factory->createPage("LinkPage", "James Smith");
		link_page->add(newspaper);
		link_page->add(search_engine);
		link_page->add(sports);

		link_page->output();
	}

	return 0;
}
