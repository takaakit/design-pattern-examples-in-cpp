// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_BRIDGE_DISPLAY_H_
#define STRUCTURAL_PATTERNS_BRIDGE_DISPLAY_H_

// ˅
class DisplayImpl;

// ˄

class Display
{
	// ˅
	
	// ˄

private:

	DisplayImpl* impl;

public:

	Display(DisplayImpl* impl);

	virtual ~Display();

	void output();

protected:

	void open();

	void write();

	void close();

	// ˅
public:
	
protected:
	
private:
	Display(const Display&) = delete;
	Display& operator=(const Display&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_BRIDGE_DISPLAY_H_

// ˅

// ˄
