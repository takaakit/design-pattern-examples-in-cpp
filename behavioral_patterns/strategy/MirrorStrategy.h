// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STRATEGY_MIRRORSTRATEGY_H_
#define BEHAVIORAL_PATTERNS_STRATEGY_MIRRORSTRATEGY_H_

// ˅
#include "behavioral_patterns/strategy/Strategy.h"

class HandSignal;

// ˄

// Mirror Strategy: showing a hand signal from the previous opponent's hand signal.
class MirrorStrategy : public Strategy
{
	// ˅
	
	// ˄

private:

	HandSignal* preOpponentsHand;

public:

	MirrorStrategy();

	~MirrorStrategy();

	HandSignal* showHandSignal();

	void notifyGameResult(GameResultType result, HandSignal* ownHand, HandSignal* opponentsHand);

	// ˅
public:
	
protected:
	
private:
	MirrorStrategy(const MirrorStrategy&) = delete;
	MirrorStrategy& operator=(const MirrorStrategy&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STRATEGY_MIRRORSTRATEGY_H_

// ˅

// ˄
