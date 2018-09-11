// ˅
#include <sstream>
#include "creational_patterns/abstract_factory/list_factory/ListData.h"
#include "creational_patterns/abstract_factory/factory/Item.h"

using namespace std;

// ˄

ListData::ListData(const string& name)
	// ˅
	: Data(name)
	// ˄
{
	// ˅
	
	// ˄
}

ListData::~ListData()
{
	// ˅
	
	// ˄
}

string ListData::toHTML()
{
	// ˅
	stringstream buffer;
	buffer << "<li>" << name << "<ul>" << endl;
	vector<shared_ptr<Item>>::const_iterator it = items.begin();
	while (it != items.end()) {
		buffer << (*it)->toHTML();
		++it;
	}
	buffer << "</ul></li>" << endl;
	return buffer.str();
	// ˄
}

// ˅

// ˄
