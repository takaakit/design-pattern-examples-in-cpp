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

	const string toString() const;

	// ˅
public:
	
protected:
	
private:
	Command(const Command&) = delete;
	Command& operator=(const Command&) = delete;
	Command(Command&&) = delete;
	Command& operator=(Command&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_INTERPRETER_COMMAND_H_

// ˅

// ˄
