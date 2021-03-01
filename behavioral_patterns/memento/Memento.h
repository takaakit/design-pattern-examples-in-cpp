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

private:

	// Money
	int money;

public:

	Memento(int money);

	int getMoney();

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
