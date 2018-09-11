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

string ListPage::toHTML()
{
	// ˅
	stringstream buffer;
	buffer << "<html><head><title>" << title << "</title></head>" << endl;
	buffer << "<body><h1>" << title << "</h1>" << endl;
	buffer << "<ul>" << endl;
	vector<shared_ptr<Item>>::const_iterator it = contents.begin();
	while (it != contents.end()) {
		buffer << (*it)->toHTML();
		++it;
	}
	buffer << "</ul>" << endl;
	buffer << "<hr><address>" << author << "</address>";
	buffer << "</body></html>" << endl;
	return buffer.str();
	// ˄
}

// ˅

// ˄
