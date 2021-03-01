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

string FileSystemElement::toString()
{
	// ˅
	return getName() + " (" + to_string(getSize()) + ")";
	// ˄
}

// ˅

// ˄
