// ˅
#include <iostream>
#include "structural_patterns/composite/File.h"

using namespace std;

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

void File::print(const string& upper_path)
{
	// ˅
	cout << upper_path << "/" << toString() << endl;
	// ˄
}

// ˅

// ˄
