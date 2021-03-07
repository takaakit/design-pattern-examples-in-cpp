// ˅
#include "behavioral_patterns/mediator/ColleagueButton.h"


// ˄

ColleagueButton::ColleagueButton(const msclr::gcroot<Button^> button, Mediator* mediator)
	: button(button)
	// ˅
	, Colleague(mediator)
	// ˄
{
	// ˅
	
	// ˄
}

ColleagueButton::~ColleagueButton()
{
	// ˅
	
	// ˄
}

void ColleagueButton::setActivation(const bool is_enable)
{
	// ˅
	button->Enabled = is_enable;
	// ˄
}

bool ColleagueButton::isPressed() const
{
	// ˅
	return button->Focused;
	// ˄
}

// ˅

// ˄
