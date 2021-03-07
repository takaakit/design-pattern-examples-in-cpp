// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUEBUTTON_H_
#define BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUEBUTTON_H_

// ˅
#include <string>
#include <msclr/gcroot.h>
#include "Colleague.h"

using namespace std;
using namespace System::Windows::Forms;

// ˄

class ColleagueButton : public Colleague
{
	// ˅
	
	// ˄

private:

	const msclr::gcroot<Button^> button;

public:

	ColleagueButton(const msclr::gcroot<Button^> button, Mediator* mediator);

	~ColleagueButton();

	// Set enable/disable from the Mediator
	void setActivation(const bool is_enable);

	bool isPressed() const;

	// ˅
public:
	
protected:
	
private:
	ColleagueButton(const ColleagueButton&) = delete;
	ColleagueButton& operator=(const ColleagueButton&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUEBUTTON_H_

// ˅

// ˄
