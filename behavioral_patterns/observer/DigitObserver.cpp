// ˅
#include <iostream>
#include "behavioral_patterns/observer/DigitObserver.h"
#include "behavioral_patterns/observer/Subject.h"
#include "behavioral_patterns/observer/NumberSubject.h"

using namespace std;

// ˄

DigitObserver::DigitObserver(const NumberSubject* numberSubject)
	: numberSubject(numberSubject)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

DigitObserver::~DigitObserver()
{
	// ˅
	
	// ˄
}

void DigitObserver::update(const Subject* changedSubject) const
{
	// ˅
	// Before processing, it checks to make sure the changed subject is the subject held.
	if (changedSubject == numberSubject) {
		cout << "Digit    : " << numberSubject->getValue() << endl;
	}
	// ˄
}

// ˅

// ˄
