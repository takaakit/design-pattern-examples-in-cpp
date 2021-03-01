// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_VISITOR_FILE_H_
#define BEHAVIORAL_PATTERNS_VISITOR_FILE_H_

// ˅
#include <string>
#include "behavioral_patterns/visitor/FileSystemElement.h"

class Visitor;

using namespace std;

// ˄

class File : public FileSystemElement
{
	// ˅
	
	// ˄

private:

	const string name;

	const int size;

public:

	File(const string& name, const int size);

	~File();

	void accept(Visitor* visitor);

	// File name
	string getName();

	// File size
	int getSize();

	// ˅
public:
	
protected:
	
private:
	File(const File&) = delete;
	File& operator=(const File&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_VISITOR_FILE_H_

// ˅

// ˄
