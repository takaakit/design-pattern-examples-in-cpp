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
	vector<shared_ptr<Command>>::const_iterator it = past_commands.begin();
	while (it != past_commands.end()) {
		(*it)->execute();
		++it;
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
