// ˅
#include "behavioral_patterns/visitor/FileSystemElement.h"

// ˄

FileSystemElement::FileSystemElement()
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
	return getName() + " (" + to_string(getSize()) + ")";
	// ˄
}

// ˅

// ˄
