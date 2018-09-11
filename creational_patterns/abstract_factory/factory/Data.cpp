// ˅
#include "creational_patterns/abstract_factory/factory/Data.h"

// ˄

Data::Data(const string& name)
	// ˅
	: Item(name)
	// ˄
{
	// ˅
	
	// ˄
}

Data::~Data()
{
	// ˅
	vector<shared_ptr<Item>>::const_iterator it = items.begin();
	while (it != items.end()) {
		++it;
	}
	items.clear();
	// ˄
}

void Data::add(shared_ptr<Item> item)
{
	// ˅
	items.push_back(item);
	// ˄
}

// ˅

// ˄
