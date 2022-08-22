// ˅
#include "behavioral_patterns/state/NightState.h"
#include "behavioral_patterns/state/DaytimeState.h"
#include "behavioral_patterns/state/Context.h"

// ˄

NightState* NightState::getInstance()
{
	// ˅
	static NightState* instance = new NightState();
	return instance;
	// ˄
}

NightState::NightState()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

NightState::~NightState()
{
	// ˅
	
	// ˄
}

void NightState::setTime(Context* context, const int hour)
{
	// ˅
	if (9 <= hour && hour < 17) {
		context->changeState(DaytimeState::getInstance());
	}
	// ˄
}

void NightState::use(const Context* context) const
{
	// ˅
	context->callSecurityGuardsRoom("Emergency: Use a safe at night!");
	// ˄
}

void NightState::alarm(const Context* context) const
{
	// ˅
	context->callSecurityGuardsRoom("Sound an emergency bell at night");
	// ˄
}

void NightState::phone(const Context* context) const
{
	// ˅
	context->recordSecurityLog("Record a night call");
	// ˄
}

const string NightState::toString() const
{
	// ˅
	return "[Night]";
	// ˄
}

// ˅

// ˄
