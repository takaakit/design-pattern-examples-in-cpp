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
	
	// ˄
}

void Program::parse(Context* context)
{
	// ˅
	context->slideToken("program");
	command_list.reset(new CommandList());
	command_list->parse(context);
	// ˄
}

string Program::toString()
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
