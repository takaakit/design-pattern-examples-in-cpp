// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_LINK_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_LINK_H_

// ˅
#include <string>
#include "creational_patterns/abstract_factory/factory/Item.h"

using namespace std;

// ˄

class Link : public Item
{
	// ˅
	
	// ˄

protected:

	const string url;

public:

	Link(const string& name, const string& url);

	virtual ~Link();

	// ˅
public:
	
protected:
	
private:
	Link(const Link&) = delete;
	Link& operator=(const Link&) = delete;
	Link(Link&&) = delete;
	Link& operator=(Link&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_LINK_H_

// ˅

// ˄
