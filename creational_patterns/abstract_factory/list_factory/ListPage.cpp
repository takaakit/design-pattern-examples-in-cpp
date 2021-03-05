// ˅
#include <sstream>
#include "creational_patterns/abstract_factory/list_factory/ListPage.h"
#include "creational_patterns/abstract_factory/factory/Item.h"

using namespace std;

// ˄

ListPage::ListPage(const string& title, const string& author)
	// ˅
	: Page(title, author)
	// ˄
{
	// ˅
	
	// ˄
}

ListPage::~ListPage()
{
	// ˅
	
	// ˄
}

const string ListPage::toHTML() const
{
	// ˅
	stringstream buffer;
	buffer << "<html><head><title>" << title << "</title></head>" << endl;
	buffer << "<body><h1>" << title << "</h1>" << endl;
	buffer << "<ul>" << endl;
	for (Item* content : contents) {
		buffer << content->toHTML();
	}
	buffer << "</ul>" << endl;
	buffer << "<hr><address>" << author << "</address>";
	buffer << "</body></html>" << endl;
	return buffer.str();
	// ˄
}

// ˅

// ˄
