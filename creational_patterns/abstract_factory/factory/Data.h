// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_DATA_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_DATA_H_

// ˅
#include <string>
#include <vector>
#include <memory>
#include "creational_patterns/abstract_factory/factory/Item.h"

using namespace std;

// ˄

class Data : public Item
{
	// ˅
	
	// ˄

protected:

	vector<Item*> items;

public:

	Data(const string& name);

	virtual ~Data();

	void add(Item* item);

	// ˅
public:
	
protected:
	
private:
	Data(const Data&) = delete;
	Data& operator=(const Data&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_DATA_H_

// ˅

// ˄
