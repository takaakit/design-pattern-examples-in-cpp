// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STATE_CONTEXT_H_
#define BEHAVIORAL_PATTERNS_STATE_CONTEXT_H_

// ˅
#include <string>
#include <memory>

class State;

using namespace std;

// ˄

class Context
{
	// ˅
	
	// ˄

public:

	virtual ~Context();

	// Set time
	virtual void setTime(const int hour) = 0;

	// Change state
	virtual void changeState(State* state) = 0;

	// Call a security guard room
	virtual void callSecurityGuardsRoom(const string& msg) = 0;

	// Record security log
	virtual void recordSecurityLog(const string& msg) = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STATE_CONTEXT_H_

// ˅

// ˄
