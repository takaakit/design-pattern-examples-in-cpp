// ˅
#include "behavioral_patterns/mediator/ColleagueRadioButton.h"
#include "behavioral_patterns/mediator/CLIWrapper.h"

using namespace System;

// ˄

ColleagueRadioButton::ColleagueRadioButton(const msclr::gcroot<RadioButton^> radio_button, Mediator* mediator)
	: radio_button(radio_button)
	// ˅
	, Colleague(mediator)
	// ˄
{
	// ˅
	// Wrapper class for calling unmanaged code from managed code
	CLIWrapper^ cli_wrapper = gcnew CLIWrapper(mediator);

	radio_button->CheckedChanged += gcnew EventHandler(cli_wrapper, &CLIWrapper::colleagueChanged);
	// ˄
}

ColleagueRadioButton::~ColleagueRadioButton()
{
	// ˅
	
	// ˄
}

void ColleagueRadioButton::setActivation(const bool is_enable)
{
	// ˅
	radio_button->Enabled = is_enable;
	// ˄
}

bool ColleagueRadioButton::isSelected() const
{
	// ˅
	return radio_button->Checked;
	// ˄
}

// ˅

// ˄
