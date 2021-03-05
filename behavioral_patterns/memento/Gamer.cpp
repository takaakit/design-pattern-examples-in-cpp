// ˅
#include <iostream>
#include <sstream>
#include <algorithm>
#include "behavioral_patterns/memento/Gamer.h"
#include "behavioral_patterns/memento/Memento.h"

using namespace std;

// ˄

Gamer::Gamer(const int money)
	: money(money)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Memento* Gamer::createMemento()
{
	// ˅
	return new Memento(money);
	// ˄
}

void Gamer::setMemento(Memento* memento)
{
	// ˅
	this->money = memento->getMoney();
	// ˄
}

void Gamer::play()
{
	// ˅
	std::random_device random;
	std::mt19937 mt(random());
	std::uniform_int_distribution<int> value(1, 6);
	const int dice = value(mt);		// Shake a dice
	cout << "The number of dice is " << dice << "." << endl;

	int preMoney = money;
	switch (dice) {
	case 1:
	case 3:
	case 5:
		// In case of odd...Money is halved
		money /= 2;
		cout << "Gamer's money is halved: " << preMoney << " -> " << money << endl;
		break;
	case 2:
	case 4:
	case 6:
		// In case of even...Money doubles
		money *= 2;
		cout << "Gamer's money doubles: " << preMoney << " -> " << money << endl;
		break;
	default:
		// Other...Exit
		cout << "Unexpected value." << endl;
		exit(1);
	}
	// ˄
}

int Gamer::getMoney() const
{
	// ˅
	return money;
	// ˄
}

const string Gamer::toString() const
{
	// ˅
	return "[money = " + to_string(money) + "]";
	// ˄
}

// ˅

// ˄
