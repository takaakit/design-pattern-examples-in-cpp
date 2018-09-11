// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STRATEGY_STRATEGYA_H_
#define BEHAVIORAL_PATTERNS_STRATEGY_STRATEGYA_H_

// ˅
#include "behavioral_patterns/strategy/Strategy.h"

class Hand;

// ˄

// When winning a game, show the same hand at the next time.
class StrategyA : public Strategy
{
	// ˅
	
	// ˄

private:

	bool won;

	shared_ptr<Hand> pre_hand;

public:

	StrategyA(const int random_seed);

	~StrategyA();

	shared_ptr<Hand> nextHand();

	void learn(const bool win);

	// ˅
public:
	
protected:
	
private:
	StrategyA(const StrategyA&) = delete;
	StrategyA& operator=(const StrategyA&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STRATEGY_STRATEGYA_H_

// ˅

// ˄
