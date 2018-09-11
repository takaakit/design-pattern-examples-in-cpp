// ˅
#include "behavioral_patterns/chain_of_responsibility/Trouble.h"

// ˄

Trouble::Trouble(const int id)
	: id(id)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Trouble::~Trouble()
{
	// ˅
	
	// ˄
}

const string Trouble::toString() const
{
	// ˅
	return "[Trouble " + to_string(id) + "]";
	// ˄
}

// ˅

// ˄
