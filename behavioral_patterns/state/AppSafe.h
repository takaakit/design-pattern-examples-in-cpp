// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STATE_APPSAFE_H_
#define BEHAVIORAL_PATTERNS_STATE_APPSAFE_H_

// ˅
#include <string>
#include <memory>
#include <msclr/gcroot.h>
#include "behavioral_patterns/state/Context.h"

class State;

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

// ˄

class AppSafe : public Context
{
	// ˅
	
	// ˄

private:

	// Current time
	msclr::gcroot<TextBox^> text_time;

	// Display of security center
	msclr::gcroot<RichTextBox^> rich_text_message;

	int current_time;

	// Current state
	State* state;

public:

	AppSafe();

	~AppSafe();

	// Set time
	void setTime(const int hour);

	// Change state
	void changeState(State* state);

	// Call a security guard room
	void callSecurityGuardsRoom(const string& msg);

	// Record security log
	void recordSecurityLog(const string& msg);

	void countUpTime();

	State* getState();

private:

	Form^ InitializeComponent();

	// ˅
public:
	
protected:
	
private:
	AppSafe(const AppSafe&) = delete;
	AppSafe& operator=(const AppSafe&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STATE_APPSAFE_H_

// ˅

// ˄
