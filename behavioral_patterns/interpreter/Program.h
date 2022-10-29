// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_INTERPRETER_PROGRAM_H_
#define BEHAVIORAL_PATTERNS_INTERPRETER_PROGRAM_H_

// ˅
#include <string>
#include <memory>
#include "behavioral_patterns/interpreter/Node.h"

using namespace std;

// ˄

// A node corresponding to "program".
class Program : public Node
{
	// ˅
	
	// ˄

private:

	Node* command_list;

public:

	Program();

	~Program();

	void parse(Context* context);

	const string toString() const;

	// ˅
public:
	
protected:
	
private:
	Program(const Program&) = delete;
	Program& operator=(const Program&) = delete;
	Program(Program&&) = delete;
	Program& operator=(Program&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_INTERPRETER_PROGRAM_H_

// ˅

// ˄
