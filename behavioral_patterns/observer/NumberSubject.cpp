// ˅
#include <random>
#include "behavioral_patterns/observer/NumberSubject.h"

// ˄

NumberSubject::NumberSubject()
	: value(0)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

NumberSubject::~NumberSubject()
{
	// ˅
	
	// ˄
}

void NumberSubject::setValue(int value)
{
	// ˅
	// Notify observers when the value is set.
	this->value = value;
	notifyObservers();
	// ˄
}

int NumberSubject::getValue() const
{
	// ˅
	return value;
	// ˄
}

// ˅

// ˄
