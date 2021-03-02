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

	string toString();

	// ˅
public:
	
protected:
	
private:
	Program(const Program&) = delete;
	Program& operator=(const Program&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_INTERPRETER_PROGRAM_H_

// ˅

// ˄
