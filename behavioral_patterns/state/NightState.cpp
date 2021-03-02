// ˅
#include "behavioral_patterns/state/NightState.h"
#include "behavioral_patterns/state/DaytimeState.h"
#include "behavioral_patterns/state/Context.h"

// ˄

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
		context->changeState(new DaytimeState());
	}
	// ˄
}

void NightState::useSafe(Context* context)
{
	// ˅
	context->callSecurityGuardsRoom("Emergency: Use a safe at night!");
	// ˄
}

void NightState::soundBell(Context* context)
{
	// ˅
	context->callSecurityGuardsRoom("Sound a emergency bell at night");
	// ˄
}

void NightState::call(Context* context)
{
	// ˅
	context->recordSecurityLog("Record a night call");
	// ˄
}

string NightState::toString()
{
	// ˅
	return "[Night]";
	// ˄
}

// ˅

// ˄
