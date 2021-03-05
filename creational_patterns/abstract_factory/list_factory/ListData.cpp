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

const string ListData::toHTML() const
{
	// ˅
	stringstream buffer;
	buffer << "<li>" << name << "<ul>" << endl;
	for (Item* item : items) {
		buffer << item->toHTML();
	}
	buffer << "</ul></li>" << endl;
	return buffer.str();
	// ˄
}

// ˅

// ˄
