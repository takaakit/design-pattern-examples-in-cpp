// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STATE_NIGHTSTATE_H_
#define BEHAVIORAL_PATTERNS_STATE_NIGHTSTATE_H_

// ˅
#include <string>
#include "behavioral_patterns/state/State.h"

using namespace std;


// ˄

class NightState : public State
{
	// ˅
	
	// ˄

private:

	static NightState* instance;

public:

	static NightState* getInstance();

private:

	NightState();

public:

	~NightState();

	// Set time
	void setTime(Context* context, const int hour);

	// Use a safe
	void useSafe(const Context* context) const;

	// Sound a emergency bell
	void soundBell(const Context* context) const;

	// Make a normal call
	void call(const Context* context) const;

	const string toString() const;

	// ˅
public:
	
protected:
	
private:
	NightState(const NightState&) = delete;
	NightState& operator=(const NightState&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STATE_NIGHTSTATE_H_

// ˅

// ˄
