// ˅
#include "behavioral_patterns/mediator/ColleagueButton.h"

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

ColleagueButton::ColleagueButton(const msclr::gcroot<Button^> button, Mediator* mediator)
	: button(button)
	// ˅
	, Colleague(mediator)
	// ˄
{
	// ˅
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
