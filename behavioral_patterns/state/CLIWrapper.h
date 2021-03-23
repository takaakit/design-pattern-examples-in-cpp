#ifndef BEHAVIORAL_PATTERNS_STATE_CLIWRAPPER_H_
#define BEHAVIORAL_PATTERNS_STATE_CLIWRAPPER_H_

#include "AppSafe.h"

// Wrapper class for calling unmanaged code from managed code
public ref class CLIWrapper
{
public:
	CLIWrapper(AppSafe* native_app_safe) : native_app_safe(native_app_safe) {}
	~CLIWrapper() {}
	Void use(Object^ sender, EventArgs^ e) {
		native_app_safe->use();
	}
	Void alarm(Object^ sender, EventArgs^ e) {
		native_app_safe->alarm();
	}
	Void phone(Object^ sender, EventArgs^ e) {
		native_app_safe->phone();
	}
	Void exit(Object^ sender, EventArgs^ e) {
		native_app_safe->exit();
	}
	Void countUpTime(Object^ sender, EventArgs^ e) {
		native_app_safe->countUpTime();
	}

private:
	AppSafe* native_app_safe;	// Pointer to the class of unmanaged code
};

#endif	// BEHAVIORAL_PATTERNS_STATE_CLIWRAPPER_H_
