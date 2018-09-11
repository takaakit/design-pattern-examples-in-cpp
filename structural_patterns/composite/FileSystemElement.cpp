// ˅
#include "structural_patterns/composite/FileSystemElement.h"

// ˄

FileSystemElement::FileSystemElement(const string& name, const int size)
	: name(name)
	, size(size)
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

string FileSystemElement::toString()
{
	// ˅
	return name + " (" + to_string(size) + ")";
	// ˄
}

// ˅

// ˄
