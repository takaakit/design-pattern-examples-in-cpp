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

public:

	NightState();

	~NightState();

	// Set time
	void setTime(Context* context, const int hour);

	// Use a safe
	void useSafe(Context* context);

	// Sound a emergency bell
	void soundBell(Context* context);

	// Make a normal call
	void call(Context* context);

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
