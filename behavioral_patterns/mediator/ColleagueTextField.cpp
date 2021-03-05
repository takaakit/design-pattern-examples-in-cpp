// ˅
#include "behavioral_patterns/mediator/ColleagueTextField.h"

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

ColleagueTextField::ColleagueTextField(const msclr::gcroot<TextBox^> text_box, Mediator* mediator)
	: text_box(text_box)
	// ˅
	, Colleague(mediator)
	// ˄
{
	// ˅
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
