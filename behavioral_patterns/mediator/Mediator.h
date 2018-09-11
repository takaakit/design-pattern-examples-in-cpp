// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_MEDIATOR_MEDIATOR_H_
#define BEHAVIORAL_PATTERNS_MEDIATOR_MEDIATOR_H_

// ˅
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

// ˄

class Mediator
{
	// ˅
	
	// ˄

public:

	virtual ~Mediator();

	virtual void colleagueChanged(Object^ sender, EventArgs^ e) = 0;

	virtual void createColleagues() = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_MEDIATOR_MEDIATOR_H_

// ˅

// ˄
