// ˅
#include <iostream>
#include "AppLogin.h"
#include "ColleagueButton.h"
#include "ColleagueRadioButton.h"
#include "ColleagueTextField.h"
#include "CLIWrapper.h"

using namespace std;

// ˄

AppLogin::AppLogin()
	: radio_user(nullptr)
	, radio_guest(nullptr)
	, text_username(nullptr)
	, text_password(nullptr)
	, button_ok(nullptr)
	, button_cancel(nullptr)
	// ˅
	
	// ˄
{
	// ˅
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	createColleagues();
	setEvents();

	Application::Run(windows_form);
	// ˄
}

AppLogin::~AppLogin()
{
	// ˅
	if (radio_user != nullptr) {
		delete radio_user;
	}
	if (radio_guest != nullptr) {
		delete radio_guest;
	}
	if (text_username != nullptr) {
		delete text_username;
	}
	if (text_password != nullptr) {
		delete text_password;
	}
	if (button_ok != nullptr) {
		delete button_ok;
	}
	if (button_cancel != nullptr) {
		delete button_cancel;
	}
	// ˄
}

void AppLogin::createColleagues()
{
	// ˅
	windows_form = gcnew mediator::WindowsForm();

	// Set up GUI objects
	windows_form->InitializeLifetimeService();

	radio_guest = new ColleagueRadioButton(windows_form->getFormsRadioGuest(), this);
	radio_user = new ColleagueRadioButton(windows_form->getFormsRadioLogin(), this);
	text_username = new ColleagueTextField(windows_form->getFormsTextUsername(), this);
	text_password = new ColleagueTextField(windows_form->getFormsTextPassword(), this);
	button_ok = new ColleagueButton(windows_form->getFormsButtonOk(), this);
	button_cancel = new ColleagueButton(windows_form->getFormsButtonCancel(), this);
	// ˄
}

void AppLogin::colleagueChanged(Object^ sender, EventArgs^ e)
{
	// ˅
	if (button_ok->isPressed() == true
		|| button_cancel->isPressed() == true) {
		Application::Exit();
	}
	else {
		if (radio_guest->isSelected() == true) {	// Guest mode
			text_username->setActivation(false);
			text_password->setActivation(false);
			button_ok->setActivation(true);
		}
		else {										// Login mode
			text_username->setActivation(true);
			text_password->setActivation(true);

			// Judge whether the changed Colleage is enabled or disabled
			if (text_username->isEmpty() == false
				&& text_password->isEmpty() == false) {
				button_ok->setActivation(true);
			}
			else {
				button_ok->setActivation(false);
			}
		}
	}
	// ˄
}

void AppLogin::setEvents()
{
	// ˅
	// Wrapper class for calling unmanaged code from managed code
	CLIWrapper^ cli_wrapper = gcnew CLIWrapper(this);

	// Set events
	windows_form->getFormsRadioGuest()->CheckedChanged += gcnew EventHandler(cli_wrapper, &CLIWrapper::colleagueChanged);
	windows_form->getFormsRadioLogin()->CheckedChanged += gcnew EventHandler(cli_wrapper, &CLIWrapper::colleagueChanged);
	windows_form->getFormsTextUsername()->TextChanged += gcnew EventHandler(cli_wrapper, &CLIWrapper::colleagueChanged);
	windows_form->getFormsTextPassword()->TextChanged += gcnew EventHandler(cli_wrapper, &CLIWrapper::colleagueChanged);
	windows_form->getFormsButtonOk()->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::colleagueChanged);
	windows_form->getFormsButtonCancel()->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::colleagueChanged);
	// ˄
}

// ˅

// ˄
