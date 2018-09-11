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

void Number::generate()
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
	vector<Observer*>::const_iterator it = observers.begin();
	while (it != observers.end()) {
		(*it)->update(this);
		++it;
	}
	// ˄
}

// ˅

// ˄
