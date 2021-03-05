// ˅
#include <iostream>
#include "behavioral_patterns/state/AppSafe.h"
#include "behavioral_patterns/state/DaytimeState.h"
#include "behavioral_patterns/state/NightState.h"

using namespace std;


// Wrapper class for calling unmanaged code from managed code
public ref class CLIWrapper
{
public:
	CLIWrapper(AppSafe* native_app_safe) : native_app_safe(native_app_safe) {}
	~CLIWrapper() {}
	Void useSate(Object^ sender, EventArgs^ e) {
		native_app_safe->useSafe();
	}
	Void soundBell(Object^ sender, EventArgs^ e) {
		native_app_safe->soundBell();
	}
	Void call(Object^ sender, EventArgs^ e) {
		native_app_safe->call();
	}
	Void exit(Object^ sender, EventArgs^ e) {
		native_app_safe->exit();
	}
	Void countUpTime(Object^ sender, EventArgs^ e) {
		native_app_safe->countUpTime();
	}

private:
	AppSafe* native_app_safe;	// Pointer to the class of unmanaged code
};

// ˄

AppSafe::AppSafe()
	: current_time(0)
	, state(new DaytimeState())
	// ˅
	
	// ˄
{
	// ˅
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(InitializeComponent());
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

	State* preState = this->state;
	this->state = state;
	delete preState;		// Delete the previous State object
	// ˄
}

void AppSafe::callSecurityGuardsRoom(const string& msg) const
{
	// ˅
	rich_text_message->HideSelection = false;		// Setting to automatically scroll to the bottom
	rich_text_message->AppendText(gcnew String(("call! " + msg + "\n").c_str()));
	// ˄
}

void AppSafe::recordSecurityLog(const string& msg) const
{
	// ˅
	rich_text_message->HideSelection = false;		// Setting to automatically scroll to the bottom
	rich_text_message->AppendText(gcnew String(("record ... " + msg + "\n").c_str()));
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

Form^ AppSafe::InitializeComponent()
{
	// ˅
	// text_time
	text_time = gcnew TextBox();
	text_time->Location = Point(12, 14);
	text_time->Name = L"text_time";
	text_time->Size = System::Drawing::Size(219, 25);
	text_time->TabIndex = 1;

	// rich_text_message
	rich_text_message = gcnew RichTextBox();
	rich_text_message->Location = Point(12, 45);
	rich_text_message->Name = L"rich_text_message";
	rich_text_message->Size = System::Drawing::Size(555, 252);
	rich_text_message->TabIndex = 2;
	rich_text_message->Text = L"";

	// Wrapper class for calling unmanaged code from managed code
	CLIWrapper^ cli_wrapper = gcnew CLIWrapper(this);

	// Start time count thread via wrapper class
	Timer^ timer = gcnew Timer();
	timer->Interval = 1000;
	timer->Tick += gcnew EventHandler(cli_wrapper, &CLIWrapper::countUpTime);		// Count up time
	timer->Start();

	// button_use
	Button^ button_use = gcnew Button();
	button_use->Location = Point(10, 300);
	button_use->Name = L"button_use";
	button_use->Size = System::Drawing::Size(140, 30);
	button_use->TabIndex = 3;
	button_use->Text = L"Use";
	button_use->UseVisualStyleBackColor = true;
	button_use->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::useSate);		// Safe use button pressed

	// button_alarm
	Button^ button_alarm = gcnew Button();
	button_alarm->Location = Point(150, 300);
	button_alarm->Name = L"button_alarm";
	button_alarm->Size = System::Drawing::Size(140, 30);
	button_alarm->TabIndex = 4;
	button_alarm->Text = L"Alarm";
	button_alarm->UseVisualStyleBackColor = true;
	button_alarm->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::soundBell);	// Emergency bell button pressed

	// button_phone
	Button^ button_phone = gcnew Button();
	button_phone->Location = Point(290, 300);
	button_phone->Name = L"button_phone";
	button_phone->Size = System::Drawing::Size(140, 30);
	button_phone->TabIndex = 5;
	button_phone->Text = L"Phone";
	button_phone->UseVisualStyleBackColor = true;
	button_phone->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::call);		// Normal call button pressed

	// button_exit
	Button^ button_exit = gcnew Button();
	button_exit->Location = Point(430, 300);
	button_exit->Name = L"button_exit";
	button_exit->Size = System::Drawing::Size(140, 30);
	button_exit->TabIndex = 6;
	button_exit->Text = L"Exit";
	button_exit->UseVisualStyleBackColor = true;
	button_exit->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::exit);		// Exit button pressed

	// AppSafe
	Form^ main_form = gcnew Form();
	main_form->SuspendLayout();
	main_form->AutoScaleDimensions = SizeF(10, 18);
	main_form->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	main_form->ClientSize = System::Drawing::Size(580, 340);
	main_form->Controls->Add(button_exit);
	main_form->Controls->Add(button_phone);
	main_form->Controls->Add(button_alarm);
	main_form->Controls->Add(button_use);
	main_form->Controls->Add(this->rich_text_message);
	main_form->Controls->Add(this->text_time);
	main_form->Name = L"AppSafe";
	main_form->Text = L"MyForm";
	main_form->ResumeLayout(false);
	main_form->PerformLayout();

	return main_form;
	// ˄
}

// ˅

// ˄
