// ˅
#include "creational_patterns/abstract_factory/table_factory/TableLink.h"

// ˄

TableLink::TableLink(const string& name, const string& url)
	// ˅
	: Link(name, url)
	// ˄
{
	// ˅
	
	// ˄
}

TableLink::~TableLink()
{
	// ˅
	
	// ˄
}

string TableLink::toHTML()
{
	// ˅
	return "  <td><a href=\"" + url + "\">" + name + "</a></td>\n";
	// ˄
}

// ˅

// ˄
