// ˅
#include "behavioral_patterns/state/DaytimeState.h"
#include "behavioral_patterns/state/NightState.h"
#include "behavioral_patterns/state/Context.h"

// ˄

DaytimeState::DaytimeState()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

DaytimeState::~DaytimeState()
{
	// ˅
	
	// ˄
}

void DaytimeState::setTime(Context* context, const int hour)
{
	// ˅
	if (hour < 9 || 17 <= hour) {
		context->changeState(shared_ptr<State>(new NightState()));
	}
	// ˄
}

void DaytimeState::useSafe(Context* context)
{
	// ˅
	context->recordSecurityLog("Use a safe in the daytime");
	// ˄
}

void DaytimeState::soundBell(Context* context)
{
	// ˅
	context->callSecurityGuardsRoom("Sound a emergency bell in the daytime");
	// ˄
}

void DaytimeState::call(Context* context)
{
	// ˅
	context->callSecurityGuardsRoom("Make a normal call in the daytime");
	// ˄
}

string DaytimeState::toString()
{
	// ˅
	return "[Daytime]";
	// ˄
}

// ˅

// ˄
