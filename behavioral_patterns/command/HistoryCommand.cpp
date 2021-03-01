// ˅
#include <memory>
#include "behavioral_patterns/command/HistoryCommand.h"

using namespace std;

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
	
	// ˄
}

void HistoryCommand::execute()
{
	// ˅
	for (shared_ptr<Command> past_command : past_commands) {
		past_command->execute();
	}
	// ˄
}

void HistoryCommand::add(shared_ptr<Command> cmd)
{
	// ˅
	past_commands.push_back(cmd);
	// ˄
}

void HistoryCommand::undo()
{
	// ˅
	if (past_commands.size() > 0) {
		past_commands.pop_back();
	}
	// ˄
}

void HistoryCommand::clear()
{
	// ˅
	past_commands.clear();
	// ˄
}

// ˅

// ˄
