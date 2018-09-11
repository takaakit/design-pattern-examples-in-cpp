// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_TABLE_FACTORY_TABLEDATA_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_TABLE_FACTORY_TABLEDATA_H_

// ˅
#include <string>
#include "creational_patterns/abstract_factory/factory/Data.h"

using namespace std;

// ˄

class TableData : public Data
{
	// ˅
	
	// ˄

public:

	TableData(const string& name);

	~TableData();

	string toHTML();

	// ˅
public:
	
protected:
	
private:
	TableData(const TableData&) = delete;
	TableData& operator=(const TableData&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_TABLE_FACTORY_TABLEDATA_H_

// ˅

// ˄
