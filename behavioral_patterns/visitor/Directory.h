// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_VISITOR_DIRECTORY_H_
#define BEHAVIORAL_PATTERNS_VISITOR_DIRECTORY_H_

// ˅
#include <vector>
#include <string>
#include "behavioral_patterns/visitor/FileSystemElement.h"

class Visitor;
class FileSystemElement;

using namespace std;

// ˄

class Directory : public FileSystemElement
{
	// ˅
	
	// ˄

private:

	// Collection of elements
	vector<FileSystemElement*> elements;

public:

	Directory(const string& name);

	~Directory();

	int getSize();

	// Accept a visitor
	void accept(Visitor* visitor);

	// Add an entry
	FileSystemElement* add(FileSystemElement* element);

	// Create a iterator
	vector<FileSystemElement*>::const_iterator iterator();

	bool hasNext(vector<FileSystemElement*>::const_iterator it);

	// ˅
public:
	
protected:
	
private:
	Directory(const Directory&) = delete;
	Directory& operator=(const Directory&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_VISITOR_DIRECTORY_H_

// ˅

// ˄
