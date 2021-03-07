// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_COMPOSITE_DIRECTORY_H_
#define STRUCTURAL_PATTERNS_COMPOSITE_DIRECTORY_H_

// ˅
#include <string>
#include <vector>
#include "structural_patterns/composite/FileSystemElement.h"

using namespace std;

// ˄

class Directory : public FileSystemElement
{
	// ˅
	
	// ˄

private:

	const string name;

	vector<FileSystemElement*> elements;

public:

	Directory(const string& name);

	~Directory();

	const string getName() const;

	const int getSize() const;

	// Print this element with the "upper_path".
	void print(const string& upper_path) const;

	// Add a element
	FileSystemElement* add(FileSystemElement* element);

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

#endif	// STRUCTURAL_PATTERNS_COMPOSITE_DIRECTORY_H_

// ˅

// ˄
