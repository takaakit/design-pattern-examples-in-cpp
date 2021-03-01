// ˅
#include "creational_patterns/abstract_factory/table_factory/TableData.h"
#include "creational_patterns/abstract_factory/table_factory/TableFactory.h"
#include "creational_patterns/abstract_factory/table_factory/TableLink.h"
#include "creational_patterns/abstract_factory/table_factory/TablePage.h"

// ˄

TableFactory::TableFactory()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

TableFactory::~TableFactory()
{
	// ˅
	
	// ˄
}

Page* TableFactory::createPage(const string& title, const string& author)
{
	// ˅
	return new TablePage(title, author);
	// ˄
}

Link* TableFactory::createLink(const string& name, const string& url)
{
	// ˅
	return new TableLink(name, url);
	// ˄
}

Data* TableFactory::createData(const string& name)
{
	// ˅
	return new TableData(name);
	// ˄
}

// ˅

// ˄
