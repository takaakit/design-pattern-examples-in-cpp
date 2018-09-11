// ˅
#include "behavioral_patterns/mediator/ColleagueButton.h"

using namespace System;

// ˄

ColleagueButton::ColleagueButton(msclr::gcroot<Button^> button, Mediator* mediator)
	: button(button)
	// ˅
	, Colleague(mediator)
	// ˄
{
	// ˅
	CLIWrapper^ cli_wrapper = gcnew CLIWrapper(this);
	button->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::colleagueChanged);
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

bool ColleagueButton::isPressed()
{
	// ˅
	return button->Focused;
	// ˄
}

// ˅

// ˄
