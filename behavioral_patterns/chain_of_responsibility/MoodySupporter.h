// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_MOODYSUPPORTER_H_
#define BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_MOODYSUPPORTER_H_

// ˅
#include <string>
#include "behavioral_patterns/chain_of_responsibility/Supporter.h"

using namespace std;

// ˄

class MoodySupporter : public Supporter
{
	// ˅
	
	// ˄

public:

	MoodySupporter(const string& name);

	~MoodySupporter();

protected:

	// Troubles with an odd ID are handled.
	bool canHandle(const Trouble* trouble) const;

	// ˅
public:
	
protected:
	
private:
	MoodySupporter(const MoodySupporter&) = delete;
	MoodySupporter& operator=(const MoodySupporter&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_MOODYSUPPORTER_H_

// ˅

// ˄
