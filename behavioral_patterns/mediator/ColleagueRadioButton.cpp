// ˅
#include "behavioral_patterns/mediator/ColleagueRadioButton.h"

using namespace System;


// Wrapper class for calling unmanaged code from managed code
public ref class CLIWrapper
{
public:
	CLIWrapper(Mediator* mediator) : mediator(mediator) {}
	~CLIWrapper() {}
	void colleagueChanged(Object^ sender, EventArgs^ e) {
		mediator->colleagueChanged(sender, e);
	}

private:
	Mediator* mediator;	// Pointer to the class of unmanaged code
};

// ˄

ColleagueRadioButton::ColleagueRadioButton(msclr::gcroot<RadioButton^> radio_button, Mediator* mediator)
	: radio_button(radio_button)
	// ˅
	, Colleague(mediator)
	// ˄
{
	// ˅
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

bool ColleagueRadioButton::isSelected()
{
	// ˅
	return radio_button->Checked;
	// ˄
}

// ˅

// ˄
