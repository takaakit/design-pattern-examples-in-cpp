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
	
	// ˄
}

void Command::parse(Context* context)
{
	// ˅
	if (context->getToken() == "repeat") {
		node.reset(new Repeat());
	}
	else {
		node.reset(new Action());
	}
	node->parse(context);
	// ˄
}

string Command::toString()
{
	// ˅
	return node->toString();
	// ˄
}

// ˅

// ˄
