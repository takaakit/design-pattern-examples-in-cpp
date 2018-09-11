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

shared_ptr<Page> TableFactory::createPage(const string& title, const string& author)
{
	// ˅
	return shared_ptr<Page>(new TablePage(title, author));
	// ˄
}

shared_ptr<Link> TableFactory::createLink(const string& name, const string& url)
{
	// ˅
	return shared_ptr<Link>(new TableLink(name, url));
	// ˄
}

shared_ptr<Data> TableFactory::createData(const string& name)
{
	// ˅
	return shared_ptr<Data>(new TableData(name));
	// ˄
}

// ˅

// ˄
