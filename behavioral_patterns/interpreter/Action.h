// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_INTERPRETER_ACTION_H_
#define BEHAVIORAL_PATTERNS_INTERPRETER_ACTION_H_

// ˅
#include <string>
#include "behavioral_patterns/interpreter/Node.h"

using namespace std;

// ˄

// A node corresponding to "forward", "left", and "right".
class Action : public Node
{
	// ˅
	
	// ˄

private:

	string name;

public:

	Action();

	~Action();

	void parse(Context* context);

	const string toString() const;

	// ˅
public:
	
protected:
	
private:
	Action(const Action&) = delete;
	Action& operator=(const Action&) = delete;
	Action(Action&&) = delete;
	Action& operator=(Action&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_INTERPRETER_ACTION_H_

// ˅

// ˄
