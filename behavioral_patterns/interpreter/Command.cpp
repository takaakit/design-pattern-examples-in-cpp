// ˅
#include "behavioral_patterns/interpreter/Command.h"
#include "behavioral_patterns/interpreter/Context.h"
#include "behavioral_patterns/interpreter/Repeat.h"
#include "behavioral_patterns/interpreter/Action.h"

// ˄

Command::Command()
	: node(nullptr)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Command::~Command()
{
	// ˅
	if (node != nullptr) {
		delete node;
	}
	// ˄
}

void Command::parse(Context* context)
{
	// ˅
	Node* a_node;
	if (context->getToken() == "repeat") {
		a_node = new Repeat();
		a_node->parse(context);
	}
	else {
		a_node = new Action();
		a_node->parse(context);
	}

	node = a_node;		// Hold the parsed node
	// ˄
}

const string Command::toString() const
{
	// ˅
	return node->toString();
	// ˄
}

// ˅

// ˄
