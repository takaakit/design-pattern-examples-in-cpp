// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_ADAPTER_PRINTMESSAGEDISPLAY_H_
#define STRUCTURAL_PATTERNS_ADAPTER_PRINTMESSAGEDISPLAY_H_

// ˅
#include <string>
#include "structural_patterns/adapter/MessageDisplay.h"
#include "structural_patterns/adapter/Print.h"

using namespace std;

// ˄

// Adapt the MessageDisplay interface to the Print interface.
class PrintMessageDisplay : public MessageDisplay, public Print
{
	// ˅
	
	// ˄

public:

	PrintMessageDisplay(const string& message);

	~PrintMessageDisplay();

	void printWeak() const;

	void printStrong() const;

	// ˅
public:
	
protected:
	
private:
	PrintMessageDisplay(const PrintMessageDisplay&) = delete;
	PrintMessageDisplay& operator=(const PrintMessageDisplay&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_ADAPTER_PRINTMESSAGEDISPLAY_H_

// ˅

// ˄
