// ˅
#include "behavioral_patterns/mediator/ColleagueTextField.h"
#include "behavioral_patterns/mediator/CLIWrapper.h"

using namespace System;

// ˄

ColleagueTextField::ColleagueTextField(const msclr::gcroot<TextBox^> text_box, Mediator* mediator)
	: text_box(text_box)
	// ˅
	, Colleague(mediator)
	// ˄
{
	// ˅
	// Wrapper class for calling unmanaged code from managed code
	CLIWrapper^ cli_wrapper = gcnew CLIWrapper(mediator);

	text_box->TextChanged += gcnew EventHandler(cli_wrapper, &CLIWrapper::colleagueChanged);
	// ˄
}

ColleagueTextField::~ColleagueTextField()
{
	// ˅
	
	// ˄
}

void ColleagueTextField::setActivation(const bool is_enable)
{
	// ˅
	text_box->Enabled = is_enable;
	// ˄
}

bool ColleagueTextField::isEmpty() const
{
	// ˅
	return text_box->Text == "";
	// ˄
}

// ˅

// ˄
