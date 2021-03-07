// ˅
#include "NightState.h"
#include "DaytimeState.h"
#include "Context.h"

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

void NightState::useSafe(const Context* context) const
{
	// ˅
	context->callSecurityGuardsRoom("Emergency: Use a safe at night!");
	// ˄
}

void NightState::soundBell(const Context* context) const
{
	// ˅
	context->callSecurityGuardsRoom("Sound a emergency bell at night");
	// ˄
}

void NightState::call(const Context* context) const
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
