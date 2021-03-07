// ˅
#include "behavioral_patterns/command/PaintingCommand.h"
#include "behavioral_patterns/command/PaintingTarget.h"


// ˄

PaintingCommand::PaintingCommand(const PaintingTarget* painting_target, const double painting_pos_x, const double painting_pos_y)
	: painting_pos_x(painting_pos_x)
	, painting_pos_y(painting_pos_y)
	, painting_target(painting_target)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

PaintingCommand::~PaintingCommand()
{
	// ˅
	
	// ˄
}

void PaintingCommand::execute() const
{
	// ˅
	painting_target->paint(painting_pos_x, painting_pos_y);
	// ˄
}

// ˅

// ˄
