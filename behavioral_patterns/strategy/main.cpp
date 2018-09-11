#include <iostream>
#include <memory>
#include "behavioral_patterns/strategy/Hand.h"
#include "behavioral_patterns/strategy/Player.h"
#include "behavioral_patterns/strategy/StrategyA.h"
#include "behavioral_patterns/strategy/StrategyB.h"

using namespace std;

/*
A game of rock-scissors-paper.
There are two strategies below.

* When winning a game, show the same hand at the next time.
* Calculate a hand from the previous hand stochastically.
*/

int main(int argc, char* argv[]) {
	if (argc != 3) {
		cout << "Usage: strategy.exe RandomSeedNumber1 RandomSeedNumber2" << endl;
		cout << "Ex.  : strategy.exe 314 15" << endl;
	}
	else {
		int random_seed1 = stoi(argv[1]);
		int random_seed2 = stoi(argv[2]);
		unique_ptr<StrategyA> strategy_a = unique_ptr<StrategyA>(new StrategyA(random_seed1));
		unique_ptr<Player> player1 = unique_ptr<Player>(new Player("Emily", strategy_a.get()));
		unique_ptr<StrategyB> strategy_b = unique_ptr<StrategyB>(new StrategyB(random_seed2));
		unique_ptr<Player> player2 = unique_ptr<Player>(new Player("James", strategy_b.get()));

		for (int i = 0; i < 100; ++i) {
			shared_ptr<Hand> next_hand1 = player1->nextHand();
			shared_ptr<Hand> next_hand2 = player2->nextHand();
			if (next_hand1->isStrongerThan(next_hand2) == true) {
				cout << "Winner: " << player1->toString() << endl;
				player1->won();
				player2->lost();
			}
			else if (next_hand2->isStrongerThan(next_hand1) == true) {
				cout << "Winner: " << player2->toString() << endl;
				player1->lost();
				player2->won();
			}
			else {
				cout << "Draw..." << endl;
				player1->drew();
				player2->drew();
			}
		}
		cout << "RESULT:" << endl
			<< player1->toString() << endl
			<< player2->toString() << endl;
	}

	return 0;
}
