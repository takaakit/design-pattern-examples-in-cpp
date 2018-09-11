// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_VISITOR_FILESYSTEMELEMENT_H_
#define BEHAVIORAL_PATTERNS_VISITOR_FILESYSTEMELEMENT_H_

// ˅
#include <string>
#include "behavioral_patterns/visitor/Element.h"

using namespace std;

// ˄

class FileSystemElement : public Element
{
	// ˅
	
	// ˄

public:

	const string name;

	FileSystemElement(const string& name);

	virtual ~FileSystemElement();

	virtual int getSize();

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

#endif	// BEHAVIORAL_PATTERNS_VISITOR_FILESYSTEMELEMENT_H_

// ˅

// ˄
