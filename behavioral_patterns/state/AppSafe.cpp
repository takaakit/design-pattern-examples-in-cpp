// ˅
#include <iostream>
#include "behavioral_patterns/state/AppSafe.h"
#include "behavioral_patterns/state/State.h"
#include "behavioral_patterns/state/DaytimeState.h"
#include "behavioral_patterns/state/CLIWrapper.h"
#include "behavioral_patterns/state/WindowsForm.h"

using namespace std;

// ˄

AppSafe::AppSafe()
	: current_time(0)
	, state(DaytimeState::getInstance())
	// ˅
	
	// ˄
{
	// ˅
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Set up GUI objects
	msclr::gcroot<state::WindowsForm^> windows_form = gcnew state::WindowsForm();

	this->text_time = windows_form->getTextTime();
	this->text_message = windows_form->getTextMessage();
	msclr::gcroot<Button^> button_use = windows_form->getButtonUse();
	msclr::gcroot<Button^> button_alarm = windows_form->getButtonAlarm();
	msclr::gcroot<Button^> button_phone = windows_form->getButtonPhone();
	msclr::gcroot<Button^> button_exit = windows_form->getButtonExit();

	// Wrapper class for calling unmanaged code from managed code
	CLIWrapper^ cli_wrapper = gcnew CLIWrapper(this);

	// Start time count thread via wrapper class
	Timer^ timer = gcnew Timer();
	timer->Interval = 1000;
	timer->Tick += gcnew EventHandler(cli_wrapper, &CLIWrapper::countUpTime);		// Count up time
	timer->Start();

	// Set events
	button_use->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::useSate);		// Safe use button pressed
	button_alarm->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::soundBell);	// Emergency bell button pressed
	button_phone->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::call);		// Normal call button pressed
	button_exit->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::exit);		// Exit button pressed

	Application::Run(windows_form);
	// ˄
}

AppSafe::~AppSafe()
{
	// ˅
	
	// ˄
}

void AppSafe::setTime(const int hour)
{
	// ˅
	string clock_string = "Current Time : ";
	if (hour < 10) {
		clock_string += "0" + to_string(hour) + ":00";
	}
	else {
		clock_string += to_string(hour) + ":00";
	}
	cout << clock_string << endl;
	text_time->ResetText();
	text_time->AppendText(gcnew String(clock_string.c_str()));
	state->setTime(this, hour);
	// ˄
}

void AppSafe::changeState(State* state)
{
	// ˅
	cout << "The state changed from " << this->state->toString() << " to " << state->toString() << "." << endl;
	this->state = state;
	// ˄
}

void AppSafe::callSecurityGuardsRoom(const string& msg) const
{
	// ˅
	text_message->HideSelection = false;		// Setting to automatically scroll to the bottom
	text_message->AppendText(gcnew String(("call! " + msg + "\r\n").c_str()));
	// ˄
}

void AppSafe::recordSecurityLog(const string& msg) const
{
	// ˅
	text_message->HideSelection = false;		// Setting to automatically scroll to the bottom
	text_message->AppendText(gcnew String(("record ... " + msg + "\r\n").c_str()));
	// ˄
}

void AppSafe::useSafe()
{
	// ˅
	state->useSafe(this);
	// ˄
}

void AppSafe::soundBell()
{
	// ˅
	state->soundBell(this);
	// ˄
}

void AppSafe::call()
{
	// ˅
	state->call(this);
	// ˄
}

void AppSafe::exit()
{
	// ˅
	Application::Exit();
	// ˄
}

void AppSafe::countUpTime()
{
	// ˅
	++current_time;
	if (current_time > 23) {
		current_time = 0;
	}
	this->setTime(current_time);	// Set the time
	// ˄
}

// ˅

// ˄
