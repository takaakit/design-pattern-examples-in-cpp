// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_DECORATOR_FULLFRAME_H_
#define STRUCTURAL_PATTERNS_DECORATOR_FULLFRAME_H_

// ˅
#include <string>
#include "structural_patterns/decorator/Frame.h"

class Display;

using namespace std;

// ˄

class FullFrame : public Frame
{
	// ˅
	
	// ˄

public:

	FullFrame(Display* display);

	~FullFrame();

	// Number of characters added left and right decoration characters
	int getColumns();

	// Number of rows added the upper and lower decoration lines
	int getRows();

	string getLineText(const int row);

private:

	string createLine(const char ch, const int size);

	// ˅
public:
	
protected:
	
private:
	FullFrame(const FullFrame&) = delete;
	FullFrame& operator=(const FullFrame&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_DECORATOR_FULLFRAME_H_

// ˅

// ˄
