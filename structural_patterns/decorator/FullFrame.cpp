// ˅
#include <sstream>
#include "structural_patterns/decorator/FullFrame.h"
#include "structural_patterns/decorator/Display.h"

using namespace std;

// ˄

FullFrame::FullFrame(const Display* display)
	// ˅
	: Frame(display)
	// ˄
{
	// ˅
	
	// ˄
}

FullFrame::~FullFrame()
{
	// ˅
	
	// ˄
}

const int FullFrame::getColumns() const
{
	// ˅
	return 1 + display->getColumns() + 1;
	// ˄
}

const int FullFrame::getRows() const
{
	// ˅
	return 1 + display->getRows() + 1;
	// ˄
}

const string FullFrame::getLineText(const int row) const
{
	// ˅
	if (row == 0) {
		return "+" + createLine('-', display->getColumns()) + "+";	// Upper frame
	}
	else if (row == display->getRows() + 1) {
		return "+" + createLine('-', display->getColumns()) + "+";	// Bottom frame
	}
	else {
		return "|" + display->getLineText(row - 1) + "|";			// Other
	}
	// ˄
}

const string FullFrame::createLine(const char ch, const int size) const
{
	// ˅
	stringstream buffer;
	for (int i = 0; i < size; ++i) {
		buffer << ch;
	}
	return buffer.str();
	// ˄
}

// ˅

// ˄
