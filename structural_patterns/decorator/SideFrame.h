// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_DECORATOR_SIDEFRAME_H_
#define STRUCTURAL_PATTERNS_DECORATOR_SIDEFRAME_H_

// ˅
#include <string>
#include "structural_patterns/decorator/Frame.h"

using namespace std;

// ˄

class SideFrame : public Frame
{
	// ˅
	
	// ˄

private:

	// Decoration character
	const char frame_char;

public:

	SideFrame(Display* display, const char frame_char);

	~SideFrame();

	// Number of characters added left and right decoration characters
	int getColumns();

	// Number of lines
	int getRows();

	string getLineText(const int row);

	// ˅
public:
	
protected:
	
private:
	SideFrame(const SideFrame&) = delete;
	SideFrame& operator=(const SideFrame&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_DECORATOR_SIDEFRAME_H_

// ˅

// ˄
