// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_COMMAND_APPMAIN_H_
#define BEHAVIORAL_PATTERNS_COMMAND_APPMAIN_H_

// ˅
#include <msclr/gcroot.h>
#include "behavioral_patterns/command/WindowsForm.h"

class HistoryCommand;
class PaintingCanvas;

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

	msclr::gcroot<command::WindowsForm^> windows_form;

	// Painting history
	HistoryCommand* history;

	PaintingCanvas* canvas;

public:

	AppMain();

	~AppMain();

	void clickUndoButton(Object^ sender, EventArgs^ e);

	void clickClearButton(Object^ sender, EventArgs^ e);

	void moveMouseOnTheCanvas(Object^ sender, MouseEventArgs^ e);

	// ˅
public:
	
protected:
	
private:
	AppMain(const AppMain&) = delete;
	AppMain& operator=(const AppMain&) = delete;
	AppMain(AppMain&&) = delete;
	AppMain& operator=(AppMain&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_COMMAND_APPMAIN_H_

// ˅

// ˄
