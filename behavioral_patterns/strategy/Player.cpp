// ˅
#include "behavioral_patterns/strategy/Player.h"
#include "behavioral_patterns/strategy/Strategy.h"

// ˄

Player::Player(const string& name, Strategy* strategy)
	: name(name)
	, win_count(0)
	, loss_count(0)
	, game_count(0)
	, strategy(strategy)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

shared_ptr<Hand> Player::nextHand()
{
	// ˅
	return strategy->nextHand();
	// ˄
}

void Player::won()
{
	// ˅
	strategy->learn(true);
	++win_count;
	++game_count;
	// ˄
}

void Player::lost()
{
	// ˅
	strategy->learn(false);
	++loss_count;
	++game_count;
	// ˄
}

void Player::drew()
{
	// ˅
	++game_count;
	// ˄
}

string Player::toString()
{
	// ˅
	return name + " [" + to_string(game_count) + " games, " + to_string(win_count) + " won, " + to_string(loss_count) + " lost, " + to_string(game_count - win_count - loss_count) + " drew]";
	// ˄
}

// ˅

// ˄
