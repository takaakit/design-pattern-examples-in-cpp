// ˅
#include "structural_patterns/decorator/SideFrame.h"
#include "structural_patterns/decorator/Display.h"

// ˄

SideFrame::SideFrame(Display* display, const char frame_char)
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

int SideFrame::getColumns()
{
	// ˅
	return 1 + display->getColumns() + 1;
	// ˄
}

int SideFrame::getRows()
{
	// ˅
	return display->getRows();
	// ˄
}

string SideFrame::getLineText(const int row)
{
	// ˅
	return frame_char + display->getLineText(row) + frame_char;
	// ˄
}

// ˅

// ˄
