// ˅
#include <iostream>
#include <fstream>
#include "creational_patterns/abstract_factory/factory/Item.h"
#include "creational_patterns/abstract_factory/factory/Page.h"

using namespace std;

// ˄

Page::Page(const string& title, const string& author)
	: title(title)
	, author(author)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Page::~Page()
{
	// ˅
	vector<shared_ptr<Item>>::const_iterator it = contents.begin();
	while (it != contents.end()) {
		++it;
	}
	contents.clear();
	// ˄
}

void Page::add(shared_ptr<Item> item)
{
	// ˅
	contents.push_back(item);
	// ˄
}

void Page::output()
{
	// ˅
	const string file_name = title + ".html";
	ofstream writer(file_name);
	if (writer.fail() == false) {
		writer << toHTML();
		cout << file_name << " has been created." << endl;
	}
	else {
		cerr << "file write error." << endl;
	}
	// ˄
}

// ˅

// ˄
