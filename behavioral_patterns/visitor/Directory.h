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

	const string name;

	// Collection of elements
	vector<FileSystemElement*> elements;

public:

	Directory(const string& name);

	~Directory();

	// Accept a visitor
	void accept(Visitor* visitor);

	// Directory name
	const string getName() const;

	// Directory size
	const int getSize() const;

	// Add an element
	void add(FileSystemElement* element);

	// Get the begin iterator
	vector<FileSystemElement*>::const_iterator getBeginIterator() const;

	// Get the end iterator
	vector<FileSystemElement*>::const_iterator getEndIterator() const;

	// ˅
public:
	
protected:
	
private:
	Directory(const Directory&) = delete;
	Directory& operator=(const Directory&) = delete;
	Directory(Directory&&) = delete;
	Directory& operator=(Directory&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_VISITOR_DIRECTORY_H_

// ˅

// ˄
