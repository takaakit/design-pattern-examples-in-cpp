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

	virtual void implOpen() const = 0;

	virtual void implWrite() const = 0;

	virtual void implClose() const = 0;

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
