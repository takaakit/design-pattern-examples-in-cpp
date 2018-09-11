// ˅
#include "creational_patterns/abstract_factory/factory/Data.h"
#include "creational_patterns/abstract_factory/factory/Factory.h"
#include "creational_patterns/abstract_factory/factory/Link.h"
#include "creational_patterns/abstract_factory/factory/Page.h"
#include "creational_patterns/abstract_factory/list_factory/ListFactory.h"
#include "creational_patterns/abstract_factory/table_factory/TableFactory.h"

using namespace std;

// ˄

Factory::~Factory()
{
	// ˅
	
	// ˄
}

// ˅
shared_ptr<Factory> Factory::getFactory(const string& class_name)
{
	if (class_name == "ListFactory") {
		return shared_ptr<Factory>(new ListFactory());
	}
	else if (class_name == "TableFactory") {
		return shared_ptr<Factory>(new TableFactory());
	}
	else {
		exit(1);
	}
}
// ˄
