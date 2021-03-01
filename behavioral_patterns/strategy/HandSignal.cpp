// ˅
#include "behavioral_patterns/strategy/HandSignal.h"

const vector<HandSignal*> HandSignal::handSignals = { new HandSignal(HandSignal::ROCK), new HandSignal(HandSignal::SCISSORS), new HandSignal(HandSignal::PAPER) };
const vector<string> HandSignal::name = { "Rock", "Scissors", "Paper" };

// ˄

HandSignal* HandSignal::getHand(const int hand_value)
{
	// ˅
	return handSignals.at(hand_value);
	// ˄
}

HandSignal::HandSignal(const int value)
	: value(value)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

HandSignal::~HandSignal()
{
	// ˅
	
	// ˄
}

bool HandSignal::isStrongerThan(const HandSignal* hand)
{
	// ˅
	return judgeGame(hand) == 1;
	// ˄
}

bool HandSignal::isWeakerThan(const HandSignal* hand)
{
	// ˅
	return judgeGame(hand) == -1;
	// ˄
}

string HandSignal::toString()
{
	// ˅
	return name.at(value);
	// ˄
}

int HandSignal::judgeGame(const HandSignal* hand)
{
	// ˅
	if (this == hand) {
		return 0;
	}
	else if ((this->value + 1) % 3 == hand->value) {
		return 1;
	}
	else {
		return -1;
	}
	// ˄
}

// ˅

// ˄