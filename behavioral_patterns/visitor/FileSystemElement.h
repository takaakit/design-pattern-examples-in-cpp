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

	FileSystemElement();

	virtual ~FileSystemElement();

	virtual const string getName() const = 0;

	virtual const int getSize() const = 0;

	const string toString() const;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_VISITOR_FILESYSTEMELEMENT_H_

// ˅

// ˄
