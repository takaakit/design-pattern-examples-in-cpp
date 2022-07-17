// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_COMMAND_HISTORYCOMMAND_H_
#define BEHAVIORAL_PATTERNS_COMMAND_HISTORYCOMMAND_H_

// ˅
#include <vector>
#include "behavioral_patterns/command/Command.h"

using namespace std;


// ˄

// Holder of the past commands
class HistoryCommand : public Command
{
	// ˅
	
	// ˄

private:

	// A set of past commands
	vector<Command*> past_commands;

public:

	HistoryCommand();

	~HistoryCommand();

	// Execute all past commands
	void execute() const;

	void add(Command* cmd);

	// Delete the last command
	void undo();

	// Delete all past commands
	void clear();

	// ˅
public:
	
protected:
	
private:
	HistoryCommand(const HistoryCommand&) = delete;
	HistoryCommand& operator=(const HistoryCommand&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_COMMAND_HISTORYCOMMAND_H_

// ˅

// ˄
