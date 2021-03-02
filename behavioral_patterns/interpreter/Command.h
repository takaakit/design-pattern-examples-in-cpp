// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_INTERPRETER_COMMAND_H_
#define BEHAVIORAL_PATTERNS_INTERPRETER_COMMAND_H_

// ˅
#include <string>
#include <memory>
#include "behavioral_patterns/interpreter/Node.h"

using namespace std;

// ˄

class Command : public Node
{
	// ˅
	
	// ˄

private:

	Node* node;

public:

	Command();

	~Command();

	void parse(Context* context);

	string toString();

	// ˅
public:
	
protected:
	
private:
	Command(const Command&) = delete;
	Command& operator=(const Command&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_INTERPRETER_COMMAND_H_

// ˅

// ˄
