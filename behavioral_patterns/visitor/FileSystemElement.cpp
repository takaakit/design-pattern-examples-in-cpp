// ˅
#include "behavioral_patterns/visitor/FileSystemElement.h"

// ˄

FileSystemElement::FileSystemElement(const string& name)
	: name(name)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

FileSystemElement::~FileSystemElement()
{
	// ˅
	
	// ˄
}

int FileSystemElement::getSize()
{
	// ˅
	return 0;
	// ˄
}

string FileSystemElement::toString()
{
	// ˅
	return name + " (" + to_string(getSize()) + ")";
	// ˄
}

// ˅

// ˄
