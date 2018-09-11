// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_LIST_FACTORY_LISTLINK_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_LIST_FACTORY_LISTLINK_H_

// ˅
#include <string>
#include "creational_patterns/abstract_factory/factory/Link.h"

using namespace std;

// ˄

class ListLink : public Link
{
	// ˅
	
	// ˄

public:

	ListLink(const string& name, const string& url);

	~ListLink();

	string toHTML();

	// ˅
public:
	
protected:
	
private:
	ListLink(const ListLink&) = delete;
	ListLink& operator=(const ListLink&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_LIST_FACTORY_LISTLINK_H_

// ˅

// ˄
