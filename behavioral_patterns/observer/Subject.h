// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_OBSERVER_SUBJECT_H_
#define BEHAVIORAL_PATTERNS_OBSERVER_SUBJECT_H_

// ˅
#include <vector>

class Observer;

using namespace std;

// ˄

// Provides an interface for attaching and detaching Observer objects.
class Subject
{
	// ˅
	
	// ˄

private:

	vector<Observer*> observers;

public:

	Subject();

	virtual ~Subject();

	void attach(Observer* observer);

	void detach(const Observer* observer);

	void notifyObservers() const;

	// ˅
public:
	
protected:
	
private:
	Subject(const Subject&) = delete;
	Subject& operator=(const Subject&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_OBSERVER_SUBJECT_H_

// ˅

// ˄
