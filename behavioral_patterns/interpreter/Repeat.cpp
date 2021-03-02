// ˅
#include <string>
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
	if (command_list != nullptr) {
		delete command_list;
	}
	// ˄
}

void Repeat::parse(Context* context)
{
	// ˅
	context->slideToken("repeat");

	number = context->getNumber();
	context->slideToken(to_string(number));
	
	CommandList* a_command_list = new CommandList();
	a_command_list->parse(context);

	command_list = a_command_list;		// Hold the parsed command list
	// ˄
}

string Repeat::toString()
{
	// ˅
	return "repeat " + to_string(number) + " " + command_list->toString();
	// ˄
}

// ˅

// ˄
