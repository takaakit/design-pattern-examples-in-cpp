// ˅
#include "behavioral_patterns/chain_of_responsibility/MoodySupporter.h"

// ˄

MoodySupporter::MoodySupporter(const string& name)
	// ˅
	: Supporter(name)
	// ˄
{
	// ˅
	
	// ˄
}

MoodySupporter::~MoodySupporter()
{
	// ˅
	
	// ˄
}

bool MoodySupporter::canHandle(const Trouble* trouble) const
{
	// ˅
	return trouble->id % 2 == 1;
	// ˄
}

// ˅

// ˄
