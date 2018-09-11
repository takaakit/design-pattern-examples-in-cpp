// ˅
#include "creational_patterns/abstract_factory/list_factory/ListLink.h"

// ˄

ListLink::ListLink(const string& name, const string& url)
	// ˅
	: Link(name, url)
	// ˄
{
	// ˅
	
	// ˄
}

ListLink::~ListLink()
{
	// ˅
	
	// ˄
}

string ListLink::toHTML()
{
	// ˅
	return "  <li><a href=\"" + url + "\">" + name + "</a></li>\n";
	// ˄
}

// ˅

// ˄
