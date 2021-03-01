// ˅
#include "behavioral_patterns/observer/Number.h"
#include "behavioral_patterns/observer/Observer.h"

// ˄

Number::Number()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Number::~Number()
{
	// ˅
	
	// ˄
}

void Number::addObserver(Observer* observer)
{
	// ˅
	observers.push_back(observer);
	// ˄
}

void Number::deleteObserver(const Observer* observer)
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

void Number::notifyObservers()
{
	// ˅
	for (Observer* observer : observers) {
		observer->update(this);
	}
	// ˄
}

// ˅

// ˄
