// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STRATEGY_STRATEGYB_H_
#define BEHAVIORAL_PATTERNS_STRATEGY_STRATEGYB_H_

// ˅
#include <vector>
#include "behavioral_patterns/strategy/Strategy.h"

class Hand;

// ˄

// Calculate a hand from the previous hand stochastically.
class StrategyB : public Strategy
{
	// ˅
	
	// ˄

private:

	vector<vector<int>> history;

	shared_ptr<Hand> pre_hand;

	shared_ptr<Hand> cur_hand;

public:

	StrategyB(const int randomSeed);

	~StrategyB();

	shared_ptr<Hand> nextHand();

	void learn(const bool win);

private:

	int getHistorySum(const int hand_value);

	// ˅
public:
	
protected:
	
private:
	StrategyB(const StrategyB&) = delete;
	StrategyB& operator=(const StrategyB&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STRATEGY_STRATEGYB_H_

// ˅

// ˄
