// ˅
#include <random>
#include "behavioral_patterns/strategy/Hand.h"
#include "behavioral_patterns/strategy/StrategyB.h"

// ˄

StrategyB::StrategyB(const int randomSeed)
	: history({{1, 1, 1}, {1, 1, 1}, {1, 1, 1}})
	, pre_hand(Hand::getHand(Hand::ROCK))
	, cur_hand(Hand::getHand(Hand::ROCK))
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

StrategyB::~StrategyB()
{
	// ˅
	
	// ˄
}

shared_ptr<Hand> StrategyB::nextHand()
{
	// ˅
	std::random_device random;
	std::mt19937 mt(random());
	std::uniform_int_distribution<int> value(0, getHistorySum(cur_hand->value) - 1);
	const int random_hand_value = value(mt);
	int hand_value = 0;
	if (random_hand_value < history[cur_hand->value][0]) {
		hand_value = Hand::ROCK;
	}
	else if (random_hand_value < history[cur_hand->value][0] + history[cur_hand->value][1]) {
		hand_value = Hand::SCISSORS;
	}
	else {
		hand_value = Hand::PAPER;
	}
	pre_hand = cur_hand;
	cur_hand = Hand::getHand(hand_value);
	return cur_hand;
	// ˄
}

void StrategyB::learn(const bool win)
{
	// ˅
	if (win == true) {
		++(history[pre_hand->value][cur_hand->value]);
	}
	else {
		++(history[pre_hand->value][(cur_hand->value + 1) % 3]);
		++(history[pre_hand->value][(cur_hand->value + 2) % 3]);
	}
	// ˄
}

int StrategyB::getHistorySum(const int hand_value)
{
	// ˅
	int sum = 0;
	for (int i = 0; i < 3; ++i) {
		sum += history[hand_value][i];
	}
	return sum;
	// ˄
}

// ˅

// ˄
