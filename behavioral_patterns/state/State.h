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
	virtual void useSafe(const Context* context) const = 0;

	// Sound a emergency bell
	virtual void soundBell(const Context* context) const = 0;

	// Make a normal call
	virtual void call(const Context* context) const = 0;

	virtual const string toString() const = 0;

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
