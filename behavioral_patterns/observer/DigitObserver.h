// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_OBSERVER_DIGITOBSERVER_H_
#define BEHAVIORAL_PATTERNS_OBSERVER_DIGITOBSERVER_H_

// ˅
#include "behavioral_patterns/observer/Observer.h"

// ˄

// Display values as a number.
class DigitObserver : public Observer
{
	// ˅
	
	// ˄

public:

	DigitObserver();

	~DigitObserver();

	void update(const Number* number) const;

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
