// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_OBSERVER_OBSERVER_H_
#define BEHAVIORAL_PATTERNS_OBSERVER_OBSERVER_H_

// ˅
class Subject;

// ˄

class Observer
{
	// ˅
	
	// ˄

public:

	virtual ~Observer();

	virtual void update(const Subject* changedSubject) const = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_OBSERVER_OBSERVER_H_

// ˅

// ˄
