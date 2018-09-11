// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_MEMENTO_GAMER_H_
#define BEHAVIORAL_PATTERNS_MEMENTO_GAMER_H_

// ˅
#include <string>
#include <vector>
#include <random>
#include <memory>

class Memento;

using namespace std;

// ˄

class Gamer
{
	// ˅
	
	// ˄

private:

	// Dessert name table
	vector<string> desserts_name;

public:

	// Gamer's money
	int money;

private:

	// Acquired desserts 
	vector<string> desserts;

public:

	Gamer(const int money);

private:

	// Get a dessert
	string getDessert();

public:

	// Get current status
	shared_ptr<Memento> createMemento();

	// Undo status
	void restoreMemento(const shared_ptr<Memento> memento);

	// Play a game
	void play();

	string toString();

	// ˅
public:
	
protected:
	
private:
	Gamer(const Gamer&) = delete;
	Gamer& operator=(const Gamer&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_MEMENTO_GAMER_H_

// ˅

// ˄
