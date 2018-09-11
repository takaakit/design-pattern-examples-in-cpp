// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_SUPPORTER_H_
#define BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_SUPPORTER_H_

// ˅
#include <string>
#include "behavioral_patterns/chain_of_responsibility/Trouble.h"

using namespace std;

// ˄

class Supporter
{
	// ˅
	
	// ˄

private:

	// Supporter name
	const string name;

	// Next supporter
	Supporter* next;

public:

	Supporter(const string& name);

	virtual ~Supporter();

	// Trouble support
	// Troubles are sent around.
	void support(const Trouble* trouble) const;

	// Set a next supporter.
	Supporter* setNext(Supporter* next);

	const string toString() const;

protected:

	virtual bool handle(const Trouble* trouble) const;

private:

	// Trouble was supported.
	void supported(const Trouble* trouble) const;

	// Trouble was unsupported.
	void unsupported(const Trouble* trouble) const;

	// ˅
public:
	
protected:
	
private:
	Supporter(const Supporter&) = delete;
	Supporter& operator=(const Supporter&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_SUPPORTER_H_

// ˅

// ˄
