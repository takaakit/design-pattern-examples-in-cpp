// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STRATEGY_STRATEGY_H_
#define BEHAVIORAL_PATTERNS_STRATEGY_STRATEGY_H_

// ˅
class Hand;

// ˄

class Strategy
{
	// ˅
	
	// ˄

public:

	virtual ~Strategy();

	virtual shared_ptr<Hand> nextHand() = 0;

	virtual void learn(const bool win) = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STRATEGY_STRATEGY_H_

// ˅

// ˄
