// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_COMMAND_APPMAIN_H_
#define BEHAVIORAL_PATTERNS_COMMAND_APPMAIN_H_

// ˅
#include <memory>

class HistoryCommand;
class PaintingCanvas;

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

// ˄

class AppMain
{
	// ˅
	
	// ˄

private:

	// Painting history
	HistoryCommand* history;

	PaintingCanvas* canvas;

public:

	AppMain();

	~AppMain();

	void clickUndoButton(Object^ sender, EventArgs^ e);

	void clickClearButton(Object^ sender, EventArgs^ e);

	void moveMouseOnTheCanvas(Object^ sender, MouseEventArgs^ e);

private:

	Form^ InitializeComponent();

	// ˅
public:
	
protected:
	
private:
	AppMain(const AppMain&) = delete;
	AppMain& operator=(const AppMain&) = delete;
	
	// ˄
};

// ˅

// Wrapper class for calling unmanaged code from managed code
public ref class CLIWrapper
{
public:
	CLIWrapper(AppMain* native_app_main) : native_app_main(native_app_main) {}
	~CLIWrapper() {}
	Void clickUndoButton(Object^ sender, EventArgs^ e) {
		native_app_main->clickUndoButton(sender, e);
	}
	Void clickClearButton(Object^ sender, EventArgs^ e) {
		native_app_main->clickClearButton(sender, e);
	}
	Void moveMouseOnTheCanvas(Object^ sender, MouseEventArgs^ e) {
		native_app_main->moveMouseOnTheCanvas(sender, e);
	}

private:
	AppMain * native_app_main;	// Pointer to the class of unmanaged code
};

// ˄

#endif	// BEHAVIORAL_PATTERNS_COMMAND_APPMAIN_H_

// ˅

// ˄
