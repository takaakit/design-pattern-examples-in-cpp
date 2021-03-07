// ˅
#include "DaytimeState.h"
#include "NightState.h"
#include "Context.h"

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
		context->changeState(new NightState());
	}
	// ˄
}

void DaytimeState::useSafe(const Context* context) const
{
	// ˅
	context->recordSecurityLog("Use a safe in the daytime");
	// ˄
}

void DaytimeState::soundBell(const Context* context) const
{
	// ˅
	context->callSecurityGuardsRoom("Sound a emergency bell in the daytime");
	// ˄
}

void DaytimeState::call(const Context* context) const
{
	// ˅
	context->callSecurityGuardsRoom("Make a normal call in the daytime");
	// ˄
}

const string DaytimeState::toString() const
{
	// ˅
	return "[Daytime]";
	// ˄
}

// ˅

// ˄
