// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_ITERATOR_AGGREGATE_H_
#define BEHAVIORAL_PATTERNS_ITERATOR_AGGREGATE_H_

// ˅
class Iterator;

// ˄

class Aggregate
{
	// ˅
	
	// ˄

public:

	virtual ~Aggregate();

	virtual Iterator* iterator() const = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_ITERATOR_AGGREGATE_H_

// ˅

// ˄
