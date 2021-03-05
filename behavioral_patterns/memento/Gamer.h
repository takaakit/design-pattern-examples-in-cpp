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
