// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STATE_DAYTIMESTATE_H_
#define BEHAVIORAL_PATTERNS_STATE_DAYTIMESTATE_H_

// ˅
#include <string>
#include "behavioral_patterns/state/State.h"

using namespace std;

// ˄

class DaytimeState : public State
{
	// ˅
	
	// ˄

public:

	DaytimeState();

	~DaytimeState();

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
	DaytimeState(const DaytimeState&) = delete;
	DaytimeState& operator=(const DaytimeState&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STATE_DAYTIMESTATE_H_

// ˅

// ˄
