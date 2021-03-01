// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_OBSERVER_DIGITOBSERVER_H_
#define BEHAVIORAL_PATTERNS_OBSERVER_DIGITOBSERVER_H_

// ˅
#include "behavioral_patterns/observer/Observer.h"

// ˄

// Display values with digits.
class DigitObserver : public Observer
{
	// ˅
	
	// ˄

public:

	DigitObserver();

	~DigitObserver();

	void update(Number* number);

	// ˅
public:
	
protected:
	
private:
	DigitObserver(const DigitObserver&) = delete;
	DigitObserver& operator=(const DigitObserver&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_OBSERVER_DIGITOBSERVER_H_

// ˅

// ˄
