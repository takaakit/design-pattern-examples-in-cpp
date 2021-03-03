#include <iostream>
#include "behavioral_patterns/memento/Gamer.h"
#include "behavioral_patterns/memento/Memento.h"

#ifdef _MSC_VER
#include <windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

/*
A dice game in which money increases and decreases:
* A gamer shakes a dice and the number determine the next state.
* If the number of dice is even, gamer's money doubles, and if it is odd, gamer's money is halved.
* If the gamer's money is less than half of the highest amount, it returns to the highest amount.
* The game is repeated.
 */

int main() {
	unique_ptr<Gamer> gamer = unique_ptr<Gamer>(new Gamer(100));// The initial money is 100
	shared_ptr<Memento> memento(gamer->createMemento());		// Save the initial state

	for (int i = 0; i < 10; ++i) {
		cout << "==== Turn " << i + 1 << endl;					// Display count

		gamer->play();											// Play a game

		// Determine the behavior of the Memento
		if (gamer->getMoney() > memento->getMoney()) {
			cout << "(Gamers' money is the highest ever, so record the current state.)" << endl;
			memento.reset(gamer->createMemento());
		}
		else if (gamer->getMoney() < memento->getMoney() / 2) {
			cout << "(Gamer's money is less than half of the highest amount, so return to the recorded state.)" << endl;
			gamer->setMemento(memento.get());
			cout << "Gamer's money returns to " << gamer->getMoney() << "." << endl;
		}

		cout << endl;

#ifdef _MSC_VER
		Sleep(1000);
#else
        sleep(1);
#endif
	}

	return 0;
}
