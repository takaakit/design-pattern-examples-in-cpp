// ˅
#include "structural_patterns/decorator/SideFrame.h"
#include "structural_patterns/decorator/Display.h"

// ˄

SideFrame::SideFrame(const Display* display, const char frame_char)
	: frame_char(frame_char)
	// ˅
	, Frame(display)
	// ˄
{
	// ˅
	
	// ˄
}

SideFrame::~SideFrame()
{
	// ˅
	
	// ˄
}

const int SideFrame::getColumns() const
{
	// ˅
	return 1 + display->getColumns() + 1;
	// ˄
}

const int SideFrame::getRows() const
{
	// ˅
	return display->getRows();
	// ˄
}

const string SideFrame::getLineText(const int row) const
{
	// ˅
	return frame_char + display->getLineText(row) + frame_char;
	// ˄
}

// ˅

// ˄
