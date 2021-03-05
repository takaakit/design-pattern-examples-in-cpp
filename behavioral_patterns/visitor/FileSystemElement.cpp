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

const string FileSystemElement::toString() const
{
	// ˅
	return getName() + " (" + to_string(getSize()) + ")";
	// ˄
}

// ˅

// ˄
