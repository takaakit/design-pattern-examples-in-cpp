#ifndef BEHAVIORAL_PATTERNS_MEDIATOR_CLIWRAPPER_H_
#define BEHAVIORAL_PATTERNS_MEDIATOR_CLIWRAPPER_H_

#include "Mediator.h"

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

#endif	// BEHAVIORAL_PATTERNS_MEDIATOR_CLIWRAPPER_H_
