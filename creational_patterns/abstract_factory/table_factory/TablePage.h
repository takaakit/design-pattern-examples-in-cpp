// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_TABLE_FACTORY_TABLEPAGE_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_TABLE_FACTORY_TABLEPAGE_H_

// ˅
#include <string>
#include "creational_patterns/abstract_factory/factory/Page.h"

using namespace std;

// ˄

class TablePage : public Page
{
	// ˅
	
	// ˄

public:

	TablePage(const string& title, const string& author);

	~TablePage();

	const string toHTML() const;

	// ˅
public:
	
protected:
	
private:
	TablePage(const TablePage&) = delete;
	TablePage& operator=(const TablePage&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_TABLE_FACTORY_TABLEPAGE_H_

// ˅

// ˄
