// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_TABLE_FACTORY_TABLELINK_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_TABLE_FACTORY_TABLELINK_H_

// ˅
#include <string>
#include "creational_patterns/abstract_factory/factory/Link.h"

using namespace std;

// ˄

class TableLink : public Link
{
	// ˅
	
	// ˄

public:

	TableLink(const string& name, const string& url);

	~TableLink();

	string toHTML();

	// ˅
public:
	
protected:
	
private:
	TableLink(const TableLink&) = delete;
	TableLink& operator=(const TableLink&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_TABLE_FACTORY_TABLELINK_H_

// ˅

// ˄
