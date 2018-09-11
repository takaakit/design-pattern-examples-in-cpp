// ˅
#include <random>
#include "behavioral_patterns/observer/RandomNumber.h"

// ˄

RandomNumber::RandomNumber()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

RandomNumber::~RandomNumber()
{
	// ˅
	
	// ˄
}

void RandomNumber::generate()
{
	// ˅
	for (int i = 0; i < 20; ++i) {
		std::random_device random;
		std::mt19937 mt(random());
		std::uniform_int_distribution<int> random_value(0, 49);
		value = random_value(mt);
		notifyObservers();
	}
	// ˄
}

// ˅

// ˄
