// ˅
#include "behavioral_patterns/strategy/HandSignal.h"

// ˄

vector<HandSignal*> HandSignal::handSignals = { new HandSignal(HandSignal::ROCK), new HandSignal(HandSignal::SCISSORS), new HandSignal(HandSignal::PAPER) };;
vector<string> HandSignal::name = { "Rock", "Scissors", "Paper" };

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

bool HandSignal::isStrongerThan(const HandSignal* hand) const
{
	// ˅
	return judgeGame(hand) == 1;
	// ˄
}

bool HandSignal::isWeakerThan(const HandSignal* hand) const
{
	// ˅
	return judgeGame(hand) == -1;
	// ˄
}

const string HandSignal::toString() const
{
	// ˅
	return name.at(value);
	// ˄
}

int HandSignal::judgeGame(const HandSignal* hand) const
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
