// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_LIMITEDSUPPORTER_H_
#define BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_LIMITEDSUPPORTER_H_

// ˅
#include <string>
#include "behavioral_patterns/chain_of_responsibility/Supporter.h"

using namespace std;

// ˄

class LimitedSupporter : public Supporter
{
	// ˅
	
	// ˄

private:

	const int limit_id;

public:

	LimitedSupporter(const string& name, const int limit_id);

	~LimitedSupporter();

protected:

	// Troubles with an ID below the limit are handled.
	bool canHandle(const Trouble* trouble) const;

	// ˅
public:
	
protected:
	
private:
	LimitedSupporter(const LimitedSupporter&) = delete;
	LimitedSupporter& operator=(const LimitedSupporter&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_LIMITEDSUPPORTER_H_

// ˅

// ˄
