// ˅
#include "behavioral_patterns/chain_of_responsibility/LazySupporter.h"

// ˄

LazySupporter::LazySupporter(const string& name)
	// ˅
	: Supporter(name)
	// ˄
{
	// ˅
	
	// ˄
}

LazySupporter::~LazySupporter()
{
	// ˅
	
	// ˄
}

bool LazySupporter::handle(const Trouble* trouble) const
{
	// ˅
	return false;
	// ˄
}

// ˅

// ˄
