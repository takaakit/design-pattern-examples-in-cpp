// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUE_H_
#define BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUE_H_

// ˅
#include <msclr/gcroot.h>
#include "behavioral_patterns/mediator/Mediator.h"

using namespace System;

// ˄

class Colleague
{
	// ˅
	
	// ˄

public:

	Mediator* mediator;

	Colleague(Mediator* mediator);

	~Colleague();

	// Set enable/disable from the Mediator
	virtual void setActivation(const bool is_enable) = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// Wrapper class for calling unmanaged code from managed code
public ref class CLIWrapper
{
public:
	CLIWrapper(Colleague* native_colleague) : native_colleague(native_colleague) {}
	~CLIWrapper() {}
	void colleagueChanged(Object^ sender, EventArgs^ e) {
		native_colleague->mediator->colleagueChanged(sender, e);
	}

private:
	Colleague * native_colleague;	// Pointer to the class of unmanaged code
};

// ˄

#endif	// BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUE_H_

// ˅

// ˄
