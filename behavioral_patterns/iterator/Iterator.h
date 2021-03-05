// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_ITERATOR_ITERATOR_H_
#define BEHAVIORAL_PATTERNS_ITERATOR_ITERATOR_H_

// ˅

// ˄

class Iterator
{
	// ˅
	
	// ˄

public:

	virtual ~Iterator();

	virtual bool hasNext() const = 0;

	virtual void* next() = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_ITERATOR_ITERATOR_H_

// ˅

// ˄
