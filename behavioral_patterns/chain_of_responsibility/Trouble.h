// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_TROUBLE_H_
#define BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_TROUBLE_H_

// ˅
#include <string>

using namespace std;

// ˄

class Trouble
{
	// ˅
	
	// ˄

public:

	// Trouble number
	const int id;

	Trouble(const int id);

	~Trouble();

	const string toString() const;

	// ˅
public:
	
protected:
	
private:
	Trouble(const Trouble&) = delete;
	Trouble& operator=(const Trouble&) = delete;
	Trouble(Trouble&&) = delete;
	Trouble& operator=(Trouble&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_TROUBLE_H_

// ˅

// ˄
