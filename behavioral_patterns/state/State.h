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

	virtual void setTime(Context* context, const int hour) = 0;

	virtual void use(const Context* context) const = 0;

	virtual void alarm(const Context* context) const = 0;

	virtual void phone(const Context* context) const = 0;

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
