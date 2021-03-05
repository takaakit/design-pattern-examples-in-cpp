// ˅
#include "structural_patterns/composite/FileSystemElement.h"

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
