// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_COMMAND_PAINTINGCOMMAND_H_
#define BEHAVIORAL_PATTERNS_COMMAND_PAINTINGCOMMAND_H_

// ˅
#include "behavioral_patterns/command/Command.h"

class PaintingTarget;


// ˄

// Command to paint a single point
class PaintingCommand : public Command
{
	// ˅
	
	// ˄

private:

	// Painting position x
	const double painting_pos_x;

	// Painting position y
	const double painting_pos_y;

	const PaintingTarget* painting_target;

public:

	PaintingCommand(const PaintingTarget* painting_target, const double painting_pos_x, const double painting_pos_y);

	~PaintingCommand();

	void execute() const;

	// ˅
public:
	
protected:
	
private:
	PaintingCommand(const PaintingCommand&) = delete;
	PaintingCommand& operator=(const PaintingCommand&) = delete;
	PaintingCommand(PaintingCommand&&) = delete;
	PaintingCommand& operator=(PaintingCommand&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_COMMAND_PAINTINGCOMMAND_H_

// ˅

// ˄
