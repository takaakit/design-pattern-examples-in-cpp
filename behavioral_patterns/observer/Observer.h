// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_OBSERVER_OBSERVER_H_
#define BEHAVIORAL_PATTERNS_OBSERVER_OBSERVER_H_

// ˅
class Number;

// ˄

class Observer
{
	// ˅
	
	// ˄

public:

	virtual ~Observer();

	virtual void update(const Number* number) const = 0;

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
