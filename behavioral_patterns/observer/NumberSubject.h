// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_OBSERVER_NUMBERSUBJECT_H_
#define BEHAVIORAL_PATTERNS_OBSERVER_NUMBERSUBJECT_H_

// ˅
#include "behavioral_patterns/observer/Subject.h"

// ˄

class NumberSubject : public Subject
{
	// ˅
	
	// ˄

private:

	int value;

public:

	NumberSubject();

	~NumberSubject();

	void setValue(int value);

	int getValue() const;

	// ˅
public:
	
protected:
	
private:
	NumberSubject(const NumberSubject&) = delete;
	NumberSubject& operator=(const NumberSubject&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_OBSERVER_NUMBERSUBJECT_H_

// ˅

// ˄
