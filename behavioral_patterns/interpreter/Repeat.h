// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_INTERPRETER_REPEAT_H_
#define BEHAVIORAL_PATTERNS_INTERPRETER_REPEAT_H_

// ˅
#include <string>
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

	Node* command_list;

public:

	Repeat();

	~Repeat();

	void parse(Context* context);

	const string toString() const;

	// ˅
public:
	
protected:
	
private:
	Repeat(const Repeat&) = delete;
	Repeat& operator=(const Repeat&) = delete;
	Repeat(Repeat&&) = delete;
	Repeat& operator=(Repeat&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_INTERPRETER_REPEAT_H_

// ˅

// ˄
