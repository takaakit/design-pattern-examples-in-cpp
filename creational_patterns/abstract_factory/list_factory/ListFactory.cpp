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

shared_ptr<Page> ListFactory::createPage(const string& title, const string& author)
{
	// ˅
	return shared_ptr<Page>(new ListPage(title, author));
	// ˄
}

shared_ptr<Link> ListFactory::createLink(const string& name, const string& url)
{
	// ˅
	return shared_ptr<Link>(new ListLink(name, url));
	// ˄
}

shared_ptr<Data> ListFactory::createData(const string& name)
{
	// ˅
	return shared_ptr<Data>(new ListData(name));
	// ˄
}

// ˅

// ˄
