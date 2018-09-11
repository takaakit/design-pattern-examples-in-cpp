// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STATE_STATE_H_
#define BEHAVIORAL_PATTERNS_STATE_STATE_H_

// ˅
#include <string>

class Context;

using namespace std;

// ˄

class State
{
	// ˅
	
	// ˄

public:

	virtual ~State();

	// Set time
	virtual void setTime(Context* context, const int hour) = 0;

	// Use a safe
	virtual void useSafe(Context* context) = 0;

	// Sound a emergency bell
	virtual void soundBell(Context* context) = 0;

	// Make a normal call
	virtual void call(Context* context) = 0;

	virtual string toString() = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STATE_STATE_H_

// ˅

// ˄
