// ˅
#include "behavioral_patterns/chain_of_responsibility/SpecialSupporter.h"

// ˄

SpecialSupporter::SpecialSupporter(const string& name, const int target_id)
	: target_id(target_id)
	// ˅
	, Supporter(name)
	// ˄
{
	// ˅
	
	// ˄
}

SpecialSupporter::~SpecialSupporter()
{
	// ˅
	
	// ˄
}

bool SpecialSupporter::handle(const Trouble* trouble) const
{
	// ˅
	return trouble->id == target_id;
	// ˄
}

// ˅

// ˄
