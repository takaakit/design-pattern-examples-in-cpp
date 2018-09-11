// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_BRIDGE_DISPLAYIMPL_H_
#define STRUCTURAL_PATTERNS_BRIDGE_DISPLAYIMPL_H_

// ˅

// ˄

class DisplayImpl
{
	// ˅
	
	// ˄

public:

	virtual ~DisplayImpl();

	virtual void implOpen() = 0;

	virtual void implWrite() = 0;

	virtual void implClose() = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_BRIDGE_DISPLAYIMPL_H_

// ˅

// ˄
