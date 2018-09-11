// ˅
#include "behavioral_patterns/mediator/ColleagueTextField.h"

using namespace System;

// ˄

ColleagueTextField::ColleagueTextField(msclr::gcroot<TextBox^> text_box, Mediator* mediator)
	: text_box(text_box)
	// ˅
	, Colleague(mediator)
	// ˄
{
	// ˅
	CLIWrapper^ cli_wrapper = gcnew CLIWrapper(this);
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

bool ColleagueTextField::isEmpty()
{
	// ˅
	return text_box->Text == "";
	// ˄
}

// ˅

// ˄
