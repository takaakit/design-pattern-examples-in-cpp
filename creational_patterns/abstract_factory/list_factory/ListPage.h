// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_LIST_FACTORY_LISTPAGE_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_LIST_FACTORY_LISTPAGE_H_

// ˅
#include <string>
#include "creational_patterns/abstract_factory/factory/Page.h"

using namespace std;

// ˄

class ListPage : public Page
{
	// ˅
	
	// ˄

public:

	ListPage(const string& title, const string& author);

	~ListPage();

	string toHTML();

	// ˅
public:
	
protected:
	
private:
	ListPage(const ListPage&) = delete;
	ListPage& operator=(const ListPage&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_LIST_FACTORY_LISTPAGE_H_

// ˅

// ˄
