// ˅
#include <sstream>
#include "structural_patterns/decorator/FullFrame.h"
#include "structural_patterns/decorator/Display.h"

using namespace std;

// ˄

FullFrame::FullFrame(Display* display)
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

int FullFrame::getColumns()
{
	// ˅
	return 1 + display->getColumns() + 1;
	// ˄
}

int FullFrame::getRows()
{
	// ˅
	return 1 + display->getRows() + 1;
	// ˄
}

string FullFrame::getLineText(const int row)
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

string FullFrame::createLine(const char ch, const int size)
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
