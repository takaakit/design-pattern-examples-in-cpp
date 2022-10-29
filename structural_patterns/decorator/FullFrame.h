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

	FullFrame(const Display* display);

	~FullFrame();

	// Number of characters added left and right decoration characters
	const int getColumns() const;

	// Number of rows added the upper and lower decoration lines
	const int getRows() const;

	const string getLineText(const int row) const;

private:

	const string createLine(const char ch, const int size) const;

	// ˅
public:
	
protected:
	
private:
	FullFrame(const FullFrame&) = delete;
	FullFrame& operator=(const FullFrame&) = delete;
	FullFrame(FullFrame&&) = delete;
	FullFrame& operator=(FullFrame&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_DECORATOR_FULLFRAME_H_

// ˅

// ˄
