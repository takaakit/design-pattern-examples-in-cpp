// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_LAZYSUPPORTER_H_
#define BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_LAZYSUPPORTER_H_

// ˅
#include <string>
#include "behavioral_patterns/chain_of_responsibility/Supporter.h"

using namespace std;

// ˄

class LazySupporter : public Supporter
{
	// ˅
	
	// ˄

public:

	LazySupporter(const string& name);

	~LazySupporter();

protected:

	// No troubles are handled.
	bool canHandle(const Trouble* trouble) const;

	// ˅
public:
	
protected:
	
private:
	LazySupporter(const LazySupporter&) = delete;
	LazySupporter& operator=(const LazySupporter&) = delete;
	LazySupporter(LazySupporter&&) = delete;
	LazySupporter& operator=(LazySupporter&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_LAZYSUPPORTER_H_

// ˅

// ˄
