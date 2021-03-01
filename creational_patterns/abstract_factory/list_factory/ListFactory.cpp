// ˅
#include "creational_patterns/abstract_factory/list_factory/ListData.h"
#include "creational_patterns/abstract_factory/list_factory/ListFactory.h"
#include "creational_patterns/abstract_factory/list_factory/ListLink.h"
#include "creational_patterns/abstract_factory/list_factory/ListPage.h"

// ˄

ListFactory::ListFactory()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

ListFactory::~ListFactory()
{
	// ˅
	
	// ˄
}

Page* ListFactory::createPage(const string& title, const string& author)
{
	// ˅
	return new ListPage(title, author);
	// ˄
}

Link* ListFactory::createLink(const string& name, const string& url)
{
	// ˅
	return new ListLink(name, url);
	// ˄
}

Data* ListFactory::createData(const string& name)
{
	// ˅
	return new ListData(name);
	// ˄
}

// ˅

// ˄
