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
Dice game collecting fruits.

* A gamer shakes a dice and the number determine the next state.
* Gamer's money increases or decreases depending on the number. The gamer sometimes gets desserts.
* The game is over if the gamer's money runs out.
*/

int main() {
	unique_ptr<Gamer> gamer = unique_ptr<Gamer>(new Gamer(100));// The initial money is 100
	shared_ptr<Memento> memento = gamer->createMemento();		// Save the initial state

	for (int i = 0; i < 100; ++i) {
		cout << "==== " << i << endl;							// Display count
		cout << "Current state: " << gamer->toString() << endl;	// Display the current state of the gamer

		gamer->play();											// Play a game

		// Determine the behavior of the Memento
		if (gamer->money > memento->money) {
			cout << "(Save the current state because money has increased.)" << endl;
			memento = gamer->createMemento();
		}
		else if (gamer->money < memento->money / 2) {
			cout << "(Go back to the previous state because money has decreased.)" << endl;
			gamer->restoreMemento(memento);
		}

#ifdef _MSC_VER
		Sleep(1000);
#else
        sleep(1);
#endif

		cout << endl;
	}

	return 0;
}
