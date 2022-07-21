#include <iostream>
#include <memory>
#include "behavioral_patterns/strategy/HandSignal.h"
#include "behavioral_patterns/strategy/GameResultType.h"
#include "behavioral_patterns/strategy/Player.h"
#include "behavioral_patterns/strategy/MirrorStrategy.h"
#include "behavioral_patterns/strategy/RandomStrategy.h"

using namespace std;

/*
A game of rock-scissors-paper. Two strategies are available:
* Random Strategy: showing a random hand signal.
* Mirror Strategy: showing a hand signal from the previous opponent's hand signal.
 */

int main(int argc, char* argv[]) {
	unique_ptr<MirrorStrategy> mirror_strategy(new MirrorStrategy());
	unique_ptr<Player> player1(new Player("Emily", mirror_strategy.get()));
	unique_ptr<RandomStrategy> random_strategy(new RandomStrategy());
	unique_ptr<Player> player2(new Player("James", random_strategy.get()));

	for (int i = 0; i < 100; ++i) {
		HandSignal* hand_of_player1 = player1->showHandSignal();
		HandSignal* hand_of_player2 = player2->showHandSignal();
		
		// Judge win, loss, or draw
		GameResultType resultOfPlayer1 = GameResultType::Draw;
		GameResultType resultOfPlayer2 = GameResultType::Draw;
		if (hand_of_player1->isStrongerThan(hand_of_player2) == true) {
			cout << "Winner: " << player1->toString() << endl;
			resultOfPlayer1 = GameResultType::Win;
			resultOfPlayer2 = GameResultType::Loss;
		}
		else if (hand_of_player2->isStrongerThan(hand_of_player1) == true) {
			cout << "Winner: " << player2->toString() << endl;
			resultOfPlayer1 = GameResultType::Loss;
			resultOfPlayer2 = GameResultType::Win;
		}
		else {
			cout << "Draw..." << endl;
			resultOfPlayer1 = GameResultType::Draw;
			resultOfPlayer2 = GameResultType::Draw;
		}
		
		player1->notifyGameResult(resultOfPlayer1, hand_of_player1, hand_of_player2);
		player2->notifyGameResult(resultOfPlayer2, hand_of_player2, hand_of_player1);
	}
	cout << "RESULT:" << endl
		<< player1->toString() << endl
		<< player2->toString() << endl;

	return 0;
}
