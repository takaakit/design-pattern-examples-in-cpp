// ˅
#include <iostream>
#include "behavioral_patterns/observer/BarChartObserver.h"
#include "behavioral_patterns/observer/Subject.h"
#include "behavioral_patterns/observer/NumberSubject.h"

using namespace std;

// ˄

BarChartObserver::BarChartObserver(const NumberSubject* numberSubject)
	: numberSubject(numberSubject)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

BarChartObserver::~BarChartObserver()
{
	// ˅
	
	// ˄
}

void BarChartObserver::update(const Subject* changedSubject) const
{
	// ˅
	// Before processing, it checks to make sure the changed subject is the subject held.
	if (changedSubject == numberSubject) {
		cout << "Bar chart: ";
		for (int i = 0; i < numberSubject->getValue(); ++i) {
			cout << "*";
		}
		cout << endl;
	}
	// ˄
}

// ˅

// ˄
