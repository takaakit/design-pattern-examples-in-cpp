// ˅
#include <iostream>
#include <sstream>
#include <algorithm>
#include "behavioral_patterns/memento/Gamer.h"
#include "behavioral_patterns/memento/Memento.h"

using namespace std;

// ˄

Gamer::Gamer(const int money)
	: desserts_name({"Cake", "Candy", "Cookie"})
	, money(money)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

string Gamer::getDessert()
{
	// ˅
	std::random_device random;
	std::mt19937 mt(random());
	std::uniform_int_distribution<int> value(0, 1);
	string prefix = "";
	if (value(mt) == 0) {
		prefix = "Delicious ";
	}
	return prefix + desserts_name.at(random() % desserts_name.size());
	// ˄
}

shared_ptr<Memento> Gamer::createMemento()
{
	// ˅
	shared_ptr<Memento> memento = shared_ptr<Memento>(new Memento(money));
	vector<string>::const_iterator it = desserts.begin();
	while (it != desserts.end()) {
		const string dessert = (*it);
		if (dessert.find_first_of("Delicious ") == 0) {		// Add a only delicious dessert
			memento->addDessert(dessert);
		}
		++it;
	}
	return memento;
	// ˄
}

void Gamer::restoreMemento(const shared_ptr<Memento> memento)
{
	// ˅
	this->money = memento->money;
	this->desserts = memento->desserts;
	// ˄
}

void Gamer::play()
{
	// ˅
	std::random_device random;
	std::mt19937 mt(random());
	std::uniform_int_distribution<int> value(1, 6);
	const int dice = value(mt);		// Shake a dice
	// In case of 1...Gamer's money increases
	if (dice == 1) {
		money += 100;
		cout << "Gamer's money increases." << endl;
	}
	// In case of 2...Gamer's money halves
	else if (dice == 2) {
		money /= 2;
		cout << "Gamer's money halves." << endl;
	}
	// In case of 6...Gamer gets desserts
	else if (dice == 6) {
		const string dessert = getDessert();
		cout << "Gamer gets desserts(" << dessert  << ")" << endl;
		desserts.push_back(dessert);
	}
	// Other...Nothing happens
	else {
		cout << "Nothing happens." << endl;
	}
	// ˄
}

string Gamer::toString()
{
	// ˅
	stringstream ss;
	vector<string>::const_iterator it = desserts.begin();
	while (it != desserts.end()) {
		ss << (*it);
		++it;
		if (it != desserts.end()) {
			ss << ", ";
		}
	}
	return "[money = " + to_string(money) + ", desserts = " + ss.str() + "]";
	// ˄
}

// ˅

// ˄
