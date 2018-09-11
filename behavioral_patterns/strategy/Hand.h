// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STRATEGY_HAND_H_
#define BEHAVIORAL_PATTERNS_STRATEGY_HAND_H_

// ˅
#include <string>
#include <vector>
#include <memory>
#include "behavioral_patterns/strategy/Hand.h"

using namespace std;

// ˄

class Hand
{
	// ˅

	// ˄

public:

	// Values of rock, scissors and paper.
	const int value;

	Hand(const int value);

	~Hand();

	// Return true if "this" is stronger than "hand".
	bool isStrongerThan(const shared_ptr<Hand> hand);

	// Return false if "this" is weaker than "hand".
	bool isWeakerThan(const shared_ptr<Hand> hand);

	string toString();

private:

	// The draw is 0. "this" win is 1. "hand" win is -1.
	int judgeGame(const shared_ptr<Hand> hand);

	// ˅
public:
	static const int ROCK = 0;			// Rock
	static const int SCISSORS = 1;		// Scissors
	static const int PAPER = 2;			// Paper

	// Hands of rock-scissors-paper
	static const vector<shared_ptr<Hand>> hands;

	// Characters of the hands
	static const vector<string> name;

	// Get an instance of the hand
	static shared_ptr<Hand> getHand(const int hand_value);

protected:
	
private:
	Hand(const Hand&) = delete;
	Hand& operator=(const Hand&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STRATEGY_HAND_H_

// ˅

// ˄
