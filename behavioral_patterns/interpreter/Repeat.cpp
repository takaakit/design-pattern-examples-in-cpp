// ˅
#include "behavioral_patterns/interpreter/Repeat.h"
#include "behavioral_patterns/interpreter/Context.h"
#include "behavioral_patterns/interpreter/CommandList.h"

// ˄

Repeat::Repeat()
	: number(0)
	, command_list(nullptr)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Repeat::~Repeat()
{
	// ˅
	
	// ˄
}

void Repeat::parse(Context* context)
{
	// ˅
	context->slideToken("repeat");
	number = context->getNumber();
	context->nextToken();
	command_list.reset(new CommandList());
	command_list->parse(context);
	// ˄
}

string Repeat::toString()
{
	// ˅
	return "[repeat " + to_string(number) + " " + command_list->toString() + "]";
	// ˄
}

// ˅

// ˄
