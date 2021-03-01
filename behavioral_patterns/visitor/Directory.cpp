// ˅
#include "behavioral_patterns/visitor/Directory.h"
#include "behavioral_patterns/visitor/Visitor.h"
#include "behavioral_patterns/visitor/FileSystemElement.h"

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

void Directory::accept(Visitor* visitor)
{
	// ˅
	visitor->visit(this);
	// ˄
}

string Directory::getName()
{
	// ˅
	return name;
	// ˄
}

int Directory::getSize()
{
	// ˅
	int size = 0;
	for (FileSystemElement* element : elements) {
		size += element->getSize();
	}
	return size;
	// ˄
}

FileSystemElement* Directory::add(FileSystemElement* element)
{
	// ˅
	elements.push_back(element);
	return this;
	// ˄
}

vector<FileSystemElement*>::const_iterator Directory::getBeginIterator()
{
	// ˅
	return elements.begin();
	// ˄
}

vector<FileSystemElement*>::const_iterator Directory::getEndIterator()
{
	// ˅
	return elements.end();
	// ˄
}

// ˅

// ˄
