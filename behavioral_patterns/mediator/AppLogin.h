// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_MEDIATOR_APPLOGIN_H_
#define BEHAVIORAL_PATTERNS_MEDIATOR_APPLOGIN_H_

// ˅
#include <msclr/gcroot.h>
#include "behavioral_patterns/mediator/Mediator.h"
#include "behavioral_patterns/mediator/WindowsForm.h"

class ColleagueButton;
class ColleagueRadioButton;
class ColleagueTextField;


// ˄

class AppLogin : public Mediator
{
	// ˅
	
	// ˄

private:

	msclr::gcroot<mediator::WindowsForm^> windows_form;

	ColleagueRadioButton* radio_user;

	ColleagueRadioButton* radio_guest;

	ColleagueTextField* text_username;

	ColleagueTextField* text_password;

	ColleagueButton* button_ok;

	ColleagueButton* button_cancel;

public:

	AppLogin();

	~AppLogin();

	void createColleagues();

	// Change enable/disable of the Colleagues when notified from the Mediators.
	void colleagueChanged(Object^ sender, EventArgs^ e);

	// ˅
public:
	
protected:
	
private:
	AppLogin(const AppLogin&) = delete;
	AppLogin& operator=(const AppLogin&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_MEDIATOR_APPLOGIN_H_

// ˅

// ˄
