// ˅
#include "behavioral_patterns/interpreter/Program.h"
#include "behavioral_patterns/interpreter/Context.h"
#include "behavioral_patterns/interpreter/CommandList.h"

// ˄

Program::Program()
	: command_list(nullptr)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Program::~Program()
{
	// ˅
	if (command_list != nullptr) {
		delete command_list;
	}
	// ˄
}

void Program::parse(Context* context)
{
	// ˅
	context->slideToken("program");

	Node* a_command_list = new CommandList();
	a_command_list->parse(context);

	this->command_list = a_command_list;	// Hold the parsed command list
	// ˄
}

const string Program::toString() const
{
	// ˅
	if (command_list != nullptr) {
		return "[program " + command_list->toString() + "]";
	}
	else {
		return "";
	}
	// ˄
}

// ˅

// ˄
