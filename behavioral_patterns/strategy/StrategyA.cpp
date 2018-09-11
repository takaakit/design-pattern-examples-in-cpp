// ˅
#include <random>
#include "behavioral_patterns/strategy/Hand.h"
#include "behavioral_patterns/strategy/StrategyA.h"

// ˄

StrategyA::StrategyA(const int random_seed)
	: won(false)
	, pre_hand(Hand::getHand(Hand::ROCK))
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

StrategyA::~StrategyA()
{
	// ˅
	
	// ˄
}

shared_ptr<Hand> StrategyA::nextHand()
{
	// ˅
	if (won == false) {
		std::random_device random;
		std::mt19937 mt(random());
		std::uniform_int_distribution<int> value(0, 2);
		pre_hand = Hand::getHand(value(mt));
	}
	return pre_hand;
	// ˄
}

void StrategyA::learn(const bool win)
{
	// ˅
	won = win;
	// ˄
}

// ˅

// ˄
