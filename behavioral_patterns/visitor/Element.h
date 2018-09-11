// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_VISITOR_ELEMENT_H_
#define BEHAVIORAL_PATTERNS_VISITOR_ELEMENT_H_

// ˅
class Visitor;

// ˄

class Element
{
	// ˅
	
	// ˄

public:

	virtual ~Element();

	virtual void accept(Visitor* visitor) = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_VISITOR_ELEMENT_H_

// ˅

// ˄
