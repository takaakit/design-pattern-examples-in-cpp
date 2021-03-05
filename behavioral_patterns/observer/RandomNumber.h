// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_OBSERVER_RANDOMNUMBER_H_
#define BEHAVIORAL_PATTERNS_OBSERVER_RANDOMNUMBER_H_

// ˅
#include "behavioral_patterns/observer/Number.h"

// ˄

// Generate a random number.
class RandomNumber : public Number
{
	// ˅
	
	// ˄

private:

	int value;

public:

	RandomNumber();

	~RandomNumber();

	void generate();

	int getValue() const;

	// ˅
public:
	
protected:
	
private:
	RandomNumber(const RandomNumber&) = delete;
	RandomNumber& operator=(const RandomNumber&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_OBSERVER_RANDOMNUMBER_H_

// ˅

// ˄
