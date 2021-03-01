// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_COMPOSITE_FILESYSTEMELEMENT_H_
#define STRUCTURAL_PATTERNS_COMPOSITE_FILESYSTEMELEMENT_H_

// ˅
#include <string>

using namespace std;

// ˄

class FileSystemElement
{
	// ˅
	
	// ˄

public:

	FileSystemElement();

	virtual ~FileSystemElement();

	virtual string getName() = 0;

	virtual int getSize() = 0;

	// Print this element with the "upper_path".
	virtual void print(const string& upper_path) = 0;

	string toString();

	// ˅
public:
	
protected:
	
private:
	FileSystemElement(const FileSystemElement&) = delete;
	FileSystemElement& operator=(const FileSystemElement&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_COMPOSITE_FILESYSTEMELEMENT_H_

// ˅

// ˄
