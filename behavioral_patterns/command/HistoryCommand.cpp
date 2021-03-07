// ˅
#include "behavioral_patterns/command/HistoryCommand.h"


// ˄

HistoryCommand::HistoryCommand()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

HistoryCommand::~HistoryCommand()
{
	// ˅
	clear();
	// ˄
}

void HistoryCommand::execute() const
{
	// ˅
	for (Command* past_command : past_commands) {
		past_command->execute();
	}
	// ˄
}

void HistoryCommand::add(Command* cmd)
{
	// ˅
	past_commands.push_back(cmd);
	// ˄
}

void HistoryCommand::undo()
{
	// ˅
	if (past_commands.size() > 0) {
		Command* last_command = past_commands.back();
		past_commands.pop_back();
		delete last_command;
	}
	// ˄
}

void HistoryCommand::clear()
{
	// ˅
	for (Command* past_command : past_commands) {
		delete past_command;
	}
	past_commands.clear();
	// ˄
}

// ˅

// ˄
