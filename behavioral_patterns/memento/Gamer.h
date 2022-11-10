// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_MEMENTO_GAMER_H_
#define BEHAVIORAL_PATTERNS_MEMENTO_GAMER_H_

// ˅
#include <string>
#include <vector>
#include <random>

class Memento;

using namespace std;

// ˄

class Gamer
{
	// ˅
	
	// ˄

private:

	// Gamer's money
	int money;

public:

	Gamer(const int money);

	// Get current status
	Memento* createMemento();

	// Undo status
	void setMemento(Memento* memento);

	// Play a game
	void play();

	int getMoney() const;

	const string toString() const;

	// ˅
public:
	
protected:
	
private:
	Gamer(const Gamer&) = delete;
	Gamer& operator=(const Gamer&) = delete;
	Gamer(Gamer&&) = delete;
	Gamer& operator=(Gamer&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_MEMENTO_GAMER_H_

// ˅

// ˄
