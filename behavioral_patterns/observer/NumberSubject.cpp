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
