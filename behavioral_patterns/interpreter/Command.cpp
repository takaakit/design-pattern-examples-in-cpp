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
	if (context->getToken() == "repeat") {
		node = new Repeat();
	}
	else {
		node = new Action();
	}
	node->parse(context);
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
