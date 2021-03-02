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

protected:

	Mediator* mediator;

public:

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
	CLIWrapper(Mediator* mediator) : mediator(mediator) {}
	~CLIWrapper() {}
	void colleagueChanged(Object^ sender, EventArgs^ e) {
		mediator->colleagueChanged(sender, e);
	}

private:
	Mediator* mediator;	// Pointer to the class of unmanaged code
};

// ˄

#endif	// BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUE_H_

// ˅

// ˄
