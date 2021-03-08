// ˅
#include <iostream>
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
	string current_token = context->getToken();
	if (current_token != "forward" && current_token != "right" && current_token != "left") {
		cerr << current_token << " is unknown" << endl;
		exit(1);
	}

	name = current_token;		// Hold the current token as this action name

	context->slideToken(current_token);
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
