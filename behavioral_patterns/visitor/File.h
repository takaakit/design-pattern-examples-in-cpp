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
	const string getName() const;

	// File size
	const int getSize() const;

	// ˅
public:
	
protected:
	
private:
	File(const File&) = delete;
	File& operator=(const File&) = delete;
	File(File&&) = delete;
	File& operator=(File&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_VISITOR_FILE_H_

// ˅

// ˄
