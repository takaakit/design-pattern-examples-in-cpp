// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_LIST_FACTORY_LISTDATA_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_LIST_FACTORY_LISTDATA_H_

// ˅
#include <string>
#include "creational_patterns/abstract_factory/factory/Data.h"

using namespace std;

// ˄

class ListData : public Data
{
	// ˅
	
	// ˄

public:

	ListData(const string& name);

	~ListData();

	string toHTML();

	// ˅
public:
	
protected:
	
private:
	ListData(const ListData&) = delete;
	ListData& operator=(const ListData&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_LIST_FACTORY_LISTDATA_H_

// ˅

// ˄
