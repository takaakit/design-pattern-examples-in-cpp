// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_ITERATOR_AGGREGATE_H_
#define BEHAVIORAL_PATTERNS_ITERATOR_AGGREGATE_H_

// ˅
#include <memory>

class Iterator;

using namespace std;

// ˄

class Aggregate
{
	// ˅
	
	// ˄

public:

	virtual ~Aggregate();

	virtual Iterator* iterator() = 0;

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
