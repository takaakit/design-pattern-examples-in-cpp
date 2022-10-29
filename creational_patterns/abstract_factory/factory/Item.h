// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_ITEM_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_ITEM_H_

// ˅
#include <string>

using namespace std;

// ˄

class Item
{
	// ˅
	
	// ˄

protected:

	const string name;

public:

	Item(const string& name);

	virtual ~Item();

	virtual const string toHTML() const = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_ITEM_H_

// ˅

// ˄
