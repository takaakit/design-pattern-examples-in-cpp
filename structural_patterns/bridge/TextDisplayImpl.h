// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_BRIDGE_TEXTDISPLAYIMPL_H_
#define STRUCTURAL_PATTERNS_BRIDGE_TEXTDISPLAYIMPL_H_

// ˅
#include <string>
#include "structural_patterns/bridge/DisplayImpl.h"

using namespace std;

// ˄

class TextDisplayImpl : public DisplayImpl
{
	// ˅
	
	// ˄

private:

	// A string to display
	const string text;

	// A number of characters in bytes
	const int width;

public:

	TextDisplayImpl(const string& text);

	~TextDisplayImpl();

	void implOpen() const;

	void implWrite() const;

	void implClose() const;

private:

	void printLine() const;

	// ˅
public:
	
protected:
	
private:
	TextDisplayImpl(const TextDisplayImpl&) = delete;
	TextDisplayImpl& operator=(const TextDisplayImpl&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_BRIDGE_TEXTDISPLAYIMPL_H_

// ˅

// ˄
