// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_INTERPRETER_REPEAT_H_
#define BEHAVIORAL_PATTERNS_INTERPRETER_REPEAT_H_

// ˅
#include <string>
#include <memory>
#include "behavioral_patterns/interpreter/Node.h"

using namespace std;

// ˄

// A node corresponding to "repeat".
class Repeat : public Node
{
	// ˅
	
	// ˄

private:

	int number;

	unique_ptr<Node> command_list;

public:

	Repeat();

	~Repeat();

	void parse(Context* context);

	string toString();

	// ˅
public:
	
protected:
	
private:
	Repeat(const Repeat&) = delete;
	Repeat& operator=(const Repeat&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_INTERPRETER_REPEAT_H_

// ˅

// ˄
