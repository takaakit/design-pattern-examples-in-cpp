// ˅
#include "behavioral_patterns/observer/Subject.h"
#include "behavioral_patterns/observer/Observer.h"

// ˄

Subject::Subject()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Subject::~Subject()
{
	// ˅
	
	// ˄
}

void Subject::attach(Observer* observer)
{
	// ˅
	observers.push_back(observer);
	// ˄
}

void Subject::detach(const Observer* observer)
{
	// ˅
	vector<Observer*>::iterator it = observers.begin();
	while (it != observers.end()) {
		if (*it == observer) {
			observers.erase(it);
		}
		++it;
	}
	// ˄
}

void Subject::notifyObservers() const
{
	// ˅
	for (Observer* observer : observers) {
		observer->update(this);
	}
	// ˄
}

// ˅

// ˄
