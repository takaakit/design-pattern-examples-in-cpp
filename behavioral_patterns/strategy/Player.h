// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STRATEGY_PLAYER_H_
#define BEHAVIORAL_PATTERNS_STRATEGY_PLAYER_H_

// ˅
#include <string>
#include <memory>
#include "behavioral_patterns/strategy/GameResultType.h"

class Strategy;
class HandSignal;

using namespace std;

// ˄

class Player
{
	// ˅
	
	// ˄

private:

	const string name;

	int win_count;

	int loss_count;

	int game_count;

	Strategy* strategy;

public:

	Player(const string& name, Strategy* strategy);

	// Show a hand signal from the strategy.
	HandSignal* showHandSignal();

	// Notify a game result.
	void notifyGameResult(GameResultType result, HandSignal* ownHand, HandSignal* opponentsHand);

	const string toString() const;

	// ˅
public:
	
protected:
	
private:
	Player(const Player&) = delete;
	Player& operator=(const Player&) = delete;
	Player(Player&&) = delete;
	Player& operator=(Player&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STRATEGY_PLAYER_H_

// ˅

// ˄
