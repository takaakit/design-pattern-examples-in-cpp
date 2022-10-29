// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_SPECIALSUPPORTER_H_
#define BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_SPECIALSUPPORTER_H_

// ˅
#include <string>
#include "behavioral_patterns/chain_of_responsibility/Supporter.h"

using namespace std;

// ˄

class SpecialSupporter : public Supporter
{
	// ˅
	
	// ˄

private:

	const int target_id;

public:

	SpecialSupporter(const string& name, const int target_id);

	~SpecialSupporter();

protected:

	// Troubles with the specific ID are handled.
	bool canHandle(const Trouble* trouble) const;

	// ˅
public:
	
protected:
	
private:
	SpecialSupporter(const SpecialSupporter&) = delete;
	SpecialSupporter& operator=(const SpecialSupporter&) = delete;
	SpecialSupporter(SpecialSupporter&&) = delete;
	SpecialSupporter& operator=(SpecialSupporter&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_CHAIN_OF_RESPONSIBILITY_SPECIALSUPPORTER_H_

// ˅

// ˄
