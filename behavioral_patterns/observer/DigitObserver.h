// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_OBSERVER_DIGITOBSERVER_H_
#define BEHAVIORAL_PATTERNS_OBSERVER_DIGITOBSERVER_H_

// ˅
#include "behavioral_patterns/observer/Observer.h"

class NumberSubject;

// ˄

// Display values as a number.
class DigitObserver : public Observer
{
	// ˅
	
	// ˄

private:

	const NumberSubject* numberSubject;

public:

	DigitObserver(const NumberSubject* numberSubject);

	~DigitObserver();

	void update(const Subject* changedSubject) const;

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
