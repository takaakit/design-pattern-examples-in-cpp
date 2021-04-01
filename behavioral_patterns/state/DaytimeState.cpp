// ˅
#include "behavioral_patterns/state/DaytimeState.h"
#include "behavioral_patterns/state/NightState.h"
#include "behavioral_patterns/state/Context.h"

// ˄

DaytimeState* DaytimeState::instance = nullptr;

DaytimeState* DaytimeState::getInstance()
{
	// ˅
	if (instance == nullptr) {
		instance = new DaytimeState();
	}
	return instance;
	// ˄
}

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
		context->changeState(NightState::getInstance());
	}
	// ˄
}

void DaytimeState::use(const Context* context) const
{
	// ˅
	context->recordSecurityLog("Use a safe in the daytime");
	// ˄
}

void DaytimeState::alarm(const Context* context) const
{
	// ˅
	context->callSecurityGuardsRoom("Sound an emergency bell in the daytime");
	// ˄
}

void DaytimeState::phone(const Context* context) const
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
