// ˅
#include "behavioral_patterns/interpreter/Action.h"
#include "behavioral_patterns/interpreter/Context.h"

using namespace std;

// ˄

Action::Action()
	: name("")
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Action::~Action()
{
	// ˅
	
	// ˄
}

void Action::parse(Context* context)
{
	// ˅
	name = context->getToken();
	context->slideToken(name);
	if (name != "forward" && name != "right" && name != "left") {
		exit(1);
	}
	// ˄
}

const string Action::toString() const
{
	// ˅
	return name;
	// ˄
}

// ˅

// ˄
