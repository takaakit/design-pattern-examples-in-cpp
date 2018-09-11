// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_MEMENTO_MEMENTO_H_
#define BEHAVIORAL_PATTERNS_MEMENTO_MEMENTO_H_

// ˅
#include <string>
#include <vector>

using namespace std;

// ˄

class Memento
{
	// ˅
	
	// ˄

public:

	// Money
	int money;

	// Desserts
	vector<string> desserts;

	Memento(int money);

	// Add a dessert
	void addDessert(string dessert);

	// ˅
public:
	
protected:
	
private:
	Memento(const Memento&) = delete;
	Memento& operator=(const Memento&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_MEMENTO_MEMENTO_H_

// ˅

// ˄
