// ˅
#include <random>
#include "behavioral_patterns/strategy/HandSignal.h"
#include "behavioral_patterns/strategy/MirrorStrategy.h"

// ˄

MirrorStrategy::MirrorStrategy()
	: preOpponentsHand(HandSignal::getHand(HandSignal::ROCK))
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

MirrorStrategy::~MirrorStrategy()
{
	// ˅
	
	// ˄
}

HandSignal* MirrorStrategy::showHandSignal()
{
	// ˅
	return preOpponentsHand;
	// ˄
}

void MirrorStrategy::notifyGameResult(GameResultType result, HandSignal* ownHand, HandSignal* opponentsHand)
{
	// ˅
	preOpponentsHand = opponentsHand;
	// ˄
}

// ˅

// ˄
