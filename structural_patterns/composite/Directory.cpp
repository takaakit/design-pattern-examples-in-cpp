// ˅
#include <iostream>
#include "structural_patterns/composite/Directory.h"
#include "structural_patterns/composite/FileSystemElement.h"

using namespace std;

// ˄

Directory::Directory(const string& name)
	// ˅
	: FileSystemElement(name, 0)
	// ˄
{
	// ˅
	
	// ˄
}

Directory::~Directory()
{
	// ˅
	
	// ˄
}

void Directory::print(const string& upper_path)
{
	// ˅
	cout << upper_path << "/" << toString() << endl;
	vector<FileSystemElement*>::const_iterator it = elements.begin();
	while (it != elements.end()) {
		(*it)->print(upper_path + "/" + name);
		++it;
	}
	// ˄
}

FileSystemElement* Directory::add(FileSystemElement* element)
{
	// ˅
	elements.push_back(element);
	return this;
	// ˄
}

// ˅

// ˄
