// ˅
#include "behavioral_patterns/mediator/ColleagueRadioButton.h"

using namespace System;

// ˄

ColleagueRadioButton::ColleagueRadioButton(const msclr::gcroot<RadioButton^> radio_button, Mediator* mediator)
	: radio_button(radio_button)
	// ˅
	, Colleague(mediator)
	// ˄
{
	// ˅
	
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
