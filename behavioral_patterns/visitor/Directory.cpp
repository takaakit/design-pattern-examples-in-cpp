// ˅
#include "behavioral_patterns/visitor/Directory.h"
#include "behavioral_patterns/visitor/Visitor.h"
#include "behavioral_patterns/visitor/FileSystemElement.h"

// ˄

Directory::Directory(const string& name)
	// ˅
	: FileSystemElement(name)
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

int Directory::getSize()
{
	// ˅
	int size = 0;
	vector<FileSystemElement*>::const_iterator it = elements.begin();
	while (it != elements.end()) {
		size += (*it)->getSize();
		++it;
	}
	return size;
	// ˄
}

void Directory::accept(Visitor* visitor)
{
	// ˅
	visitor->visit(this);
	// ˄
}

FileSystemElement* Directory::add(FileSystemElement* element)
{
	// ˅
	elements.push_back(element);
	return this;
	// ˄
}

vector<FileSystemElement*>::const_iterator Directory::iterator()
{
	// ˅
	return elements.begin();
	// ˄
}

bool Directory::hasNext(vector<FileSystemElement*>::const_iterator it)
{
	// ˅
	return it != elements.end();
	// ˄
}

// ˅

// ˄
