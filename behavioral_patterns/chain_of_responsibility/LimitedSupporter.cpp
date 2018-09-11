// ˅
#include "behavioral_patterns/chain_of_responsibility/LimitedSupporter.h"

// ˄

LimitedSupporter::LimitedSupporter(const string& name, const int limit_id)
	: limit_id(limit_id)
	// ˅
	, Supporter(name)
	// ˄
{
	// ˅
	
	// ˄
}

LimitedSupporter::~LimitedSupporter()
{
	// ˅
	
	// ˄
}

bool LimitedSupporter::handle(const Trouble* trouble) const
{
	// ˅
	return trouble->id <= limit_id;
	// ˄
}

// ˅

// ˄
