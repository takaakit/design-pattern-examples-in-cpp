// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_INTERPRETER_COMMANDLIST_H_
#define BEHAVIORAL_PATTERNS_INTERPRETER_COMMANDLIST_H_

// ˅
#include <string>
#include <vector>
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

	const string toString() const;

	// ˅
public:
	
protected:
	
private:
	CommandList(const CommandList&) = delete;
	CommandList& operator=(const CommandList&) = delete;
	CommandList(CommandList&&) = delete;
	CommandList& operator=(CommandList&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_INTERPRETER_COMMANDLIST_H_

// ˅

// ˄
