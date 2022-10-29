// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STRATEGY_HANDSIGNAL_H_
#define BEHAVIORAL_PATTERNS_STRATEGY_HANDSIGNAL_H_

// ˅
#include <string>
#include <vector>
#include <memory>

using namespace std;

// ˄

class HandSignal
{
	// ˅

	// ˄

public:

	// Rock
	static const int ROCK = 0;

	// Scissors
	static const int SCISSORS = 1;

	// Paper
	static const int PAPER = 2;

private:

	// Hands of rock-scissors-paper
	static vector<HandSignal*> handSignals;

	// Characters of the hands
	static vector<string> name;

	// Values of rock, scissors and paper.
	const int value;

public:

	// Get an instance of the hand
	static HandSignal* getHand(const int hand_value);

	HandSignal(const int value);

	~HandSignal();

	// Return true if "this" is stronger than "hand".
	bool isStrongerThan(const HandSignal* hand) const;

	// Return false if "this" is weaker than "hand".
	bool isWeakerThan(const HandSignal* hand) const;

	const string toString() const;

private:

	// The draw is 0. "this" win is 1. "hand" win is -1.
	int judgeGame(const HandSignal* hand) const;

	// ˅
public:
	
protected:
	
private:
	HandSignal(const HandSignal&) = delete;
	HandSignal& operator=(const HandSignal&) = delete;
	HandSignal(HandSignal&&) = delete;
	HandSignal& operator=(HandSignal&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STRATEGY_HANDSIGNAL_H_

// ˅

// ˄
