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

HandSignal* Player::showHandSignal()
{
	// ˅
	return strategy->showHandSignal();
	// ˄
}

void Player::notifyGameResult(GameResultType result, HandSignal* ownHand, HandSignal* opponentsHand)
{
	// ˅
	switch (result) {
	case Win:
		win_count++;
		game_count++;
		break;
	case Loss:
		loss_count++;
		game_count++;
		break;
	case Draw:
		game_count++;
		break;
	}
	
	strategy->notifyGameResult(result, ownHand, opponentsHand);
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
