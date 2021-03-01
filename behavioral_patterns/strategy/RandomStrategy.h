// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STRATEGY_RANDOMSTRATEGY_H_
#define BEHAVIORAL_PATTERNS_STRATEGY_RANDOMSTRATEGY_H_

// ˅
#include <vector>
#include "behavioral_patterns/strategy/Strategy.h"

class HandSignal;

// ˄

// Random Strategy: showing a random hand signal.
class RandomStrategy : public Strategy
{
	// ˅
	
	// ˄

public:

	RandomStrategy();

	~RandomStrategy();

	HandSignal* showHandSignal();

	void notifyGameResult(GameResultType result, HandSignal* ownHand, HandSignal* opponentsHand);

	// ˅
public:
	
protected:
	
private:
	RandomStrategy(const RandomStrategy&) = delete;
	RandomStrategy& operator=(const RandomStrategy&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STRATEGY_RANDOMSTRATEGY_H_

// ˅

// ˄
