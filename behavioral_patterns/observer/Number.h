// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_OBSERVER_NUMBER_H_
#define BEHAVIORAL_PATTERNS_OBSERVER_NUMBER_H_

// ˅
#include <vector>

class Observer;

using namespace std;

// ˄

// An abstract class that generates numbers.
class Number
{
	// ˅
	
	// ˄

protected:

	int value;

private:

	vector<Observer*> observers;

public:

	Number();

	virtual ~Number();

	virtual void generate() = 0;

	void addObserver(Observer* observer);

	void removeObserver(const Observer* observer);

	void notifyObservers() const;

	int getValue() const;

	// ˅
public:
	
protected:
	
private:
	Number(const Number&) = delete;
	Number& operator=(const Number&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_OBSERVER_NUMBER_H_

// ˅

// ˄
