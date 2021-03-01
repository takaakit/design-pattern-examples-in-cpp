// ˅
#include <random>
#include "behavioral_patterns/strategy/HandSignal.h"
#include "behavioral_patterns/strategy/RandomStrategy.h"

// ˄

RandomStrategy::RandomStrategy()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

RandomStrategy::~RandomStrategy()
{
	// ˅
	
	// ˄
}

HandSignal* RandomStrategy::showHandSignal()
{
	// ˅
	std::random_device random;
	std::mt19937 mt(random());
	std::uniform_int_distribution<int> value(0, 2);
	const int random_hand_value = value(mt);
	return HandSignal::getHand(random_hand_value);;
	// ˄
}

void RandomStrategy::notifyGameResult(GameResultType result, HandSignal* ownHand, HandSignal* opponentsHand)
{
	// ˅
	// Do nothing
	// ˄
}

// ˅

// ˄
