// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUETEXTFIELD_H_
#define BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUETEXTFIELD_H_

// ˅
#include <string>
#include <msclr/gcroot.h>
#include "behavioral_patterns/mediator/Colleague.h"

using namespace std;
using namespace System::Windows::Forms;

// ˄

class ColleagueTextField : public Colleague
{
	// ˅
	
	// ˄

private:

	const msclr::gcroot<TextBox^> text_box;

public:

	ColleagueTextField(const msclr::gcroot<TextBox^> text_box, Mediator* mediator);

	~ColleagueTextField();

	// Set enable/disable from the Mediator
	void setActivation(const bool is_enable);

	bool isEmpty() const;

	// ˅
public:
	
protected:
	
private:
	ColleagueTextField(const ColleagueTextField&) = delete;
	ColleagueTextField& operator=(const ColleagueTextField&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUETEXTFIELD_H_

// ˅

// ˄
