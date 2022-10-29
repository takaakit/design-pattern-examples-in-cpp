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

	const DisplayImpl* impl;

public:

	Display(const DisplayImpl* impl);

	virtual ~Display();

	void output() const;

protected:

	void open() const;

	void write() const;

	void close() const;

	// ˅
public:
	
protected:
	
private:
	Display(const Display&) = delete;
	Display& operator=(const Display&) = delete;
	Display(Display&&) = delete;
	Display& operator=(Display&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_BRIDGE_DISPLAY_H_

// ˅

// ˄
