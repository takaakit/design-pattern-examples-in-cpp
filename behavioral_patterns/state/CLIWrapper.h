#ifndef BEHAVIORAL_PATTERNS_STATE_CLIWRAPPER_H_
#define BEHAVIORAL_PATTERNS_STATE_CLIWRAPPER_H_

#include "AppSafe.h"

// Wrapper class for calling unmanaged code from managed code
public ref class CLIWrapper
{
public:
	CLIWrapper(AppSafe* native_app_safe) : native_app_safe(native_app_safe) {}
	~CLIWrapper() {}
	Void pressedUseButton(Object^ sender, EventArgs^ e) {
		native_app_safe->pressedUseButton();
	}
	Void pressedAlarmButton(Object^ sender, EventArgs^ e) {
		native_app_safe->pressedAlarmButton();
	}
	Void pressedPhoneButton(Object^ sender, EventArgs^ e) {
		native_app_safe->pressedPhoneButton();
	}
	Void countUpTime(Object^ sender, EventArgs^ e) {
		native_app_safe->countUpTime();
	}

private:
	AppSafe* native_app_safe;	// Pointer to the class of unmanaged code
};

#endif	// BEHAVIORAL_PATTERNS_STATE_CLIWRAPPER_H_
