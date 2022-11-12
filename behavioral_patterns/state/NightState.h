// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STATE_NIGHTSTATE_H_
#define BEHAVIORAL_PATTERNS_STATE_NIGHTSTATE_H_

// ˅
#include <string>
#include "behavioral_patterns/state/State.h"

using namespace std;


// ˄

// Singleton ( based on the example code on Wikipedia )
//   https://en.wikipedia.org/w/index.php?title=Singleton_pattern&oldid=1115882454#C++
//   Note: The latest Wikipedia page has had the C++ code example removed. This link is to the page before it was removed.
class NightState : public State
{
	// ˅
	
	// ˄

public:

	static NightState* getInstance();

private:

	NightState();

public:

	~NightState();

	void setTime(Context* context, const int hour);

	void use(const Context* context) const;

	void alarm(const Context* context) const;

	void phone(const Context* context) const;

	const string toString() const;

	// ˅
public:
	
protected:
	
private:
	NightState(const NightState&) = delete;
	NightState& operator=(const NightState&) = delete;
	NightState(NightState&&) = delete;
	NightState& operator=(NightState&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STATE_NIGHTSTATE_H_

// ˅

// ˄
