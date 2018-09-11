// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_INTERPRETER_NODE_H_
#define BEHAVIORAL_PATTERNS_INTERPRETER_NODE_H_

// ˅
#include <string>

class Context;

using namespace std;

// ˄

// Node in the syntax tree.
class Node
{
	// ˅
	
	// ˄

public:

	virtual ~Node();

	virtual void parse(Context* context) = 0;

	virtual string toString() = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_INTERPRETER_NODE_H_

// ˅

// ˄
