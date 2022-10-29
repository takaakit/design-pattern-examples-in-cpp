// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_COMPOSITE_FILE_H_
#define STRUCTURAL_PATTERNS_COMPOSITE_FILE_H_

// ˅
#include <string>
#include "structural_patterns/composite/FileSystemElement.h"

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

	const string getName() const;

	const int getSize() const;

	// Print this element with the "upper_path".
	void print(const string& upper_path) const;

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

#endif	// STRUCTURAL_PATTERNS_COMPOSITE_FILE_H_

// ˅

// ˄
