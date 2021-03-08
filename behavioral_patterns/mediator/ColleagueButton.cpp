// ˅
#include "behavioral_patterns/mediator/ColleagueButton.h"
#include "behavioral_patterns/mediator/CLIWrapper.h"


// ˄

ColleagueButton::ColleagueButton(const msclr::gcroot<Button^> button, Mediator* mediator)
	: button(button)
	// ˅
	, Colleague(mediator)
	// ˄
{
	// ˅
	// Wrapper class for calling unmanaged code from managed code
	CLIWrapper^ cli_wrapper = gcnew CLIWrapper(mediator);

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

bool ColleagueButton::isPressed() const
{
	// ˅
	return button->Focused;
	// ˄
}

// ˅

// ˄
