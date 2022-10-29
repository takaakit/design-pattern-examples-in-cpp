// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_DECORATOR_FRAME_H_
#define STRUCTURAL_PATTERNS_DECORATOR_FRAME_H_

// ˅
#include "structural_patterns/decorator/Display.h"

// ˄

class Frame : public Display
{
	// ˅
	
	// ˄

protected:

	const Display* display;

	Frame(const Display* display);

public:

	virtual ~Frame();

	// ˅
public:
	
protected:
	
private:
	Frame(const Frame&) = delete;
	Frame& operator=(const Frame&) = delete;
	Frame(Frame&&) = delete;
	Frame& operator=(Frame&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_DECORATOR_FRAME_H_

// ˅

// ˄
