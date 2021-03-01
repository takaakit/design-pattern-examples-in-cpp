// ˅
#include "behavioral_patterns/visitor/File.h"
#include "behavioral_patterns/visitor/Visitor.h"
#include "behavioral_patterns/visitor/FileSystemElement.h"

// ˄

File::File(const string& name, const int size)
	: name(name)
	, size(size)
	// ˅
	
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

void File::accept(Visitor* visitor)
{
	// ˅
	visitor->visit(this);
	// ˄
}

string File::getName()
{
	// ˅
	return name;
	// ˄
}

int File::getSize()
{
	// ˅
	return size;
	// ˄
}

// ˅

// ˄
