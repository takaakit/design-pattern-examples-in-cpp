// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_COMMAND_PAINTINGTARGET_H_
#define BEHAVIORAL_PATTERNS_COMMAND_PAINTINGTARGET_H_

// ˅

// ˄

class PaintingTarget
{
	// ˅
	
	// ˄

public:

	~PaintingTarget();

	virtual void paint(const double x, const double y) = 0;

	virtual void clear() = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_COMMAND_PAINTINGTARGET_H_

// ˅

// ˄
