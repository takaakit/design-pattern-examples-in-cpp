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

const string File::getName() const
{
	// ˅
	return name;
	// ˄
}

const int File::getSize() const
{
	// ˅
	return size;
	// ˄
}

// ˅

// ˄
