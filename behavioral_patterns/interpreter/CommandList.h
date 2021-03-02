// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_INTERPRETER_COMMANDLIST_H_
#define BEHAVIORAL_PATTERNS_INTERPRETER_COMMANDLIST_H_

// ˅
#include <string>
#include <vector>
#include <memory>
#include "behavioral_patterns/interpreter/Node.h"

using namespace std;

// ˄

class CommandList : public Node
{
	// ˅
	
	// ˄

private:

	vector<Node*> nodes;

public:

	CommandList();

	~CommandList();

	void parse(Context* context);

	string toString();

	// ˅
public:
	
protected:
	
private:
	CommandList(const CommandList&) = delete;
	CommandList& operator=(const CommandList&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_INTERPRETER_COMMANDLIST_H_

// ˅

// ˄
