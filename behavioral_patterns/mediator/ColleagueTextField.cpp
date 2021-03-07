// ˅
#include "ColleagueTextField.h"

using namespace System;

// ˄

ColleagueTextField::ColleagueTextField(const msclr::gcroot<TextBox^> text_box, Mediator* mediator)
	: text_box(text_box)
	// ˅
	, Colleague(mediator)
	// ˄
{
	// ˅
	
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
