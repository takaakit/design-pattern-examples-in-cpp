// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STRATEGY_PLAYER_H_
#define BEHAVIORAL_PATTERNS_STRATEGY_PLAYER_H_

// ˅
#include <string>
#include <memory>

class Strategy;
class Hand;

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

	// Calculate a hand from the strategy.
	shared_ptr<Hand> nextHand();

	// Won a game.
	void won();

	// Lost a game.
	void lost();

	// Drew a game.
	void drew();

	string toString();

	// ˅
public:
	
protected:
	
private:
	Player(const Player&) = delete;
	Player& operator=(const Player&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STRATEGY_PLAYER_H_

// ˅

// ˄
