#ifndef BEHAVIORAL_PATTERNS_COMMAND_CLIWRAPPER_H_
#define BEHAVIORAL_PATTERNS_COMMAND_CLIWRAPPER_H_

#include "AppMain.h"

// Wrapper class for calling unmanaged code from managed code
public ref class CLIWrapper
{
public:
	CLIWrapper(AppMain* app_main) : app_main(app_main) {}
	~CLIWrapper() {}
	Void clickUndoButton(Object^ sender, EventArgs^ e) {
		app_main->clickUndoButton(sender, e);
	}
	Void clickClearButton(Object^ sender, EventArgs^ e) {
		app_main->clickClearButton(sender, e);
	}
	Void moveMouseOnTheCanvas(Object^ sender, MouseEventArgs^ e) {
		app_main->moveMouseOnTheCanvas(sender, e);
	}

private:
	AppMain* app_main;	// Pointer to the class of unmanaged code
};

#endif	// BEHAVIORAL_PATTERNS_COMMAND_CLIWRAPPER_H_
