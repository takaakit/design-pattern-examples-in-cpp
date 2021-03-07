// ˅
#include <memory>
#include "behavioral_patterns/command/AppMain.h"
#include "behavioral_patterns/command/HistoryCommand.h"
#include "behavioral_patterns/command/PaintingCanvas.h"
#include "behavioral_patterns/command/PaintingCommand.h"
#include "behavioral_patterns/command/CLIWrapper.h"


// ˄

AppMain::AppMain()
	// ˅
	
	// ˄
{
	// ˅
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	msclr::gcroot<command::WindowsForm^> windows_form = gcnew command::WindowsForm();

	// Set up GUI objects
	windows_form->InitializeLifetimeService();

	// Wrapper class for calling unmanaged code from managed code
	CLIWrapper^ cli_wrapper = gcnew CLIWrapper(this);

	// Set events
	windows_form->getButtonUndo()->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::clickUndoButton);
	windows_form->getButtonClear()->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::clickClearButton);
	windows_form->getPictureBox()->MouseMove += gcnew MouseEventHandler(cli_wrapper, &CLIWrapper::moveMouseOnTheCanvas);

	history = new HistoryCommand();
	canvas = new PaintingCanvas(windows_form->getPictureBox());

	Application::Run(windows_form);
	// ˄
}

AppMain::~AppMain()
{
	// ˅
	if (history != nullptr) {
		delete history;
	}
	if (canvas != nullptr) {
		delete canvas;
	}
	// ˄
}

void AppMain::clickUndoButton(Object^ sender, EventArgs^ e)
{
	// ˅
	canvas->clear();
	history->undo();
	history->execute();
	// ˄
}

void AppMain::clickClearButton(Object^ sender, EventArgs^ e)
{
	// ˅
	canvas->clear();
	history->clear();
	// ˄
}

void AppMain::moveMouseOnTheCanvas(Object^ sender, MouseEventArgs^ e)
{
	// ˅
	if (e->Button == MouseButtons::Left) {
		PaintingCommand* painting_command = new PaintingCommand(canvas, e->X, e->Y);
		history->add(painting_command);
		painting_command->execute();
	}
	// ˄
}

// ˅

// ˄
