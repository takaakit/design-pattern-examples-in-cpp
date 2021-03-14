// ˅
#include "behavioral_patterns/observer/Number.h"
#include "behavioral_patterns/observer/Observer.h"

// ˄

Number::Number()
	: value(0)
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

void Number::removeObserver(const Observer* observer)
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

void Number::notifyObservers() const
{
	// ˅
	for (Observer* observer : observers) {
		observer->update(this);
	}
	// ˄
}

int Number::getValue() const
{
	// ˅
	return value;
	// ˄
}

// ˅

// ˄
