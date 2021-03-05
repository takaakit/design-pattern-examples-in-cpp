// ˅
#include <iostream>
#include "structural_patterns/composite/Directory.h"
#include "structural_patterns/composite/FileSystemElement.h"

using namespace std;

// ˄

Directory::Directory(const string& name)
	: name(name)
	// ˅
	
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

const string Directory::getName() const
{
	// ˅
	return name;
	// ˄
}

const int Directory::getSize() const
{
	// ˅
	int size = 0;
	for (FileSystemElement* element : elements) {
		size += element->getSize();
	}
	return size;
	// ˄
}

void Directory::print(const string& upper_path)
{
	// ˅
	cout << upper_path << "/" << this->toString() << endl;
	for (FileSystemElement* element : elements) {
		element->print(upper_path + "/" + name);
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
