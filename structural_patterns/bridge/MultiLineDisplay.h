// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_BRIDGE_MULTILINEDISPLAY_H_
#define STRUCTURAL_PATTERNS_BRIDGE_MULTILINEDISPLAY_H_

// ˅
#include "structural_patterns/bridge/Display.h"

class DisplayImpl;

// ˄

class MultiLineDisplay : public Display
{
	// ˅
	
	// ˄

public:

	MultiLineDisplay(DisplayImpl* impl);

	~MultiLineDisplay();

	// Repeat display for the specified number of times
	void outputMultiple(const int times);

	// ˅
public:
	
protected:
	
private:
	MultiLineDisplay(const MultiLineDisplay&) = delete;
	MultiLineDisplay& operator=(const MultiLineDisplay&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_BRIDGE_MULTILINEDISPLAY_H_

// ˅

// ˄
