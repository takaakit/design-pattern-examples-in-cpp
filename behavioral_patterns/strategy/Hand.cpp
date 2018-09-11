// ˅
#include "behavioral_patterns/strategy/Hand.h"

const vector<shared_ptr<Hand>> Hand::hands = {
	shared_ptr<Hand>(new Hand(Hand::ROCK)),
	shared_ptr<Hand>(new Hand(Hand::SCISSORS)),
	shared_ptr<Hand>(new Hand(Hand::PAPER))
};
const vector<string> Hand::name = { "Rock", "Scissors", "Paper" };

// ˄

Hand::Hand(const int value)
	: value(value)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Hand::~Hand()
{
	// ˅
	
	// ˄
}

bool Hand::isStrongerThan(const shared_ptr<Hand> hand)
{
	// ˅
	return judgeGame(hand) == 1;
	// ˄
}

bool Hand::isWeakerThan(const shared_ptr<Hand> hand)
{
	// ˅
	return judgeGame(hand) == -1;
	// ˄
}

string Hand::toString()
{
	// ˅
	return name.at(value);
	// ˄
}

int Hand::judgeGame(const shared_ptr<Hand> hand)
{
	// ˅
	if (this == hand.get()) {
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
// Get an instance of the hand
shared_ptr<Hand> Hand::getHand(const int hand_value) {
	return hands.at(hand_value);
}
// ˄
