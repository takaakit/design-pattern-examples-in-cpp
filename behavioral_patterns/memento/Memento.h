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
	const int money;

public:

	Memento(const int money);

	int getMoney() const;

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
