// ˅
#include <iostream>
#include <fstream>
#include "creational_patterns/abstract_factory/factory/Item.h"
#include "creational_patterns/abstract_factory/factory/Page.h"

#ifdef _MSC_VER
#include <Windows.h>
#else
#include <unistd.h>
#endif

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
	contents.clear();
	// ˄
}

void Page::add(Item* item)
{
	// ˅
	contents.push_back(item);
	// ˄
}

void Page::output() const
{
	// ˅
	const string file_name = title + ".html";
	ofstream writer(file_name);
	if (writer.fail() == false) {
		writer << toHTML();
		cout << file_name << " has been created." << endl;

		// Get the current directory path
		char current_directory_path[255];
#ifdef _MSC_VER
		GetCurrentDirectory(255, current_directory_path);
#else
		getcwd(current_directory_path, 255);
#endif

		cout << "Output file: " << current_directory_path << "/" << file_name << endl;
	}
	else {
		cerr << "Failed to output file: " << file_name << endl;
	}
	// ˄
}

// ˅

// ˄
