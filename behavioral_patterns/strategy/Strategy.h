// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STRATEGY_STRATEGY_H_
#define BEHAVIORAL_PATTERNS_STRATEGY_STRATEGY_H_

// ˅
#include "behavioral_patterns/strategy/GameResultType.h"

class HandSignal;

// ˄

class Strategy
{
	// ˅
	
	// ˄

public:

	virtual ~Strategy();

	// Show a hand signal.
	virtual HandSignal* showHandSignal() = 0;

	// Notify a game result.
	virtual void notifyGameResult(GameResultType result, HandSignal* ownHand, HandSignal* opponentsHand) = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STRATEGY_STRATEGY_H_

// ˅

// ˄
