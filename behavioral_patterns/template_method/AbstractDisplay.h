// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_TEMPLATE_METHOD_ABSTRACTDISPLAY_H_
#define BEHAVIORAL_PATTERNS_TEMPLATE_METHOD_ABSTRACTDISPLAY_H_

// ˅

// ˄

class AbstractDisplay
{
	// ˅
	
	// ˄

public:

	virtual ~AbstractDisplay();

	virtual void open() = 0;

	virtual void write() = 0;

	virtual void close() = 0;

	void output();

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_TEMPLATE_METHOD_ABSTRACTDISPLAY_H_

// ˅

// ˄
