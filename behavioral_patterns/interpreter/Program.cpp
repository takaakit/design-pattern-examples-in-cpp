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
	command_list = new CommandList();
	command_list->parse(context);
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
