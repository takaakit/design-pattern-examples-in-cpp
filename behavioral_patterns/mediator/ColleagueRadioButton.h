// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUERADIOBUTTON_H_
#define BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUERADIOBUTTON_H_

// ˅
#include <string>
#include <msclr/gcroot.h>
#include "Colleague.h"

using namespace std;
using namespace System::Windows::Forms;

// ˄

class ColleagueRadioButton : public Colleague
{
	// ˅
	
	// ˄

private:

	const msclr::gcroot<RadioButton^> radio_button;

public:

	ColleagueRadioButton(const msclr::gcroot<RadioButton^> radio_button, Mediator* mediator);

	~ColleagueRadioButton();

	// Set enable/disable from the Mediator
	void setActivation(const bool is_enable);

	bool isSelected() const;

	// ˅
public:
	
protected:
	
private:
	ColleagueRadioButton(const ColleagueRadioButton&) = delete;
	ColleagueRadioButton& operator=(const ColleagueRadioButton&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUERADIOBUTTON_H_

// ˅

// ˄
