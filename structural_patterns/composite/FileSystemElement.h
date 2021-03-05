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

	virtual const string getName() const = 0;

	virtual const int getSize() const = 0;

	// Print this element with the "upper_path".
	virtual void print(const string& upper_path) = 0;

	const string toString() const;

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
