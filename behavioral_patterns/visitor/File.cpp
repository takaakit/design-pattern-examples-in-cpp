// ˅
#include "behavioral_patterns/visitor/File.h"
#include "behavioral_patterns/visitor/Visitor.h"
#include "behavioral_patterns/visitor/FileSystemElement.h"

// ˄

File::File(const string& name, const int size)
	: size(size)
	// ˅
	, FileSystemElement(name)
	// ˄
{
	// ˅
	
	// ˄
}

File::~File()
{
	// ˅
	
	// ˄
}

int File::getSize()
{
	// ˅
	return size;
	// ˄
}

void File::accept(Visitor* visitor)
{
	// ˅
	visitor->visit(this);
	// ˄
}

// ˅

// ˄
