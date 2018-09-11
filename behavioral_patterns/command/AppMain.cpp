// ˅
#include <memory>
#include "behavioral_patterns/command/AppMain.h"
#include "behavioral_patterns/command/HistoryCommand.h"
#include "behavioral_patterns/command/PaintingCommand.h"
#include "behavioral_patterns/command/PaintingCanvas.h"

// ˄

AppMain::AppMain()
	// ˅
	
	// ˄
{
	// ˅
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(InitializeComponent());
	// ˄
}

AppMain::~AppMain()
{
	// ˅
	
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
		shared_ptr<PaintingCommand> painting_command = shared_ptr<PaintingCommand>(new PaintingCommand(canvas.get(), e->X, e->Y));
		history->add(painting_command);
		painting_command->execute();
	}
	// ˄
}

Form^ AppMain::InitializeComponent()
{
	// ˅
	// Wrapper class for calling unmanaged code from managed code
	CLIWrapper^ cli_wrapper = gcnew CLIWrapper(this);

	// Undo button
	Button^ undo_button = gcnew Button();
	undo_button->Location = Point(250, 550);
	undo_button->Name = L"undo_button";
	undo_button->Size = Size(150, 40);
	undo_button->TabIndex = 1;
	undo_button->Text = L"undo";
	undo_button->UseVisualStyleBackColor = true;
	undo_button->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::clickUndoButton);

	// Clear button
	Button^ clear_button = gcnew Button();
	clear_button->Location = Point(400, 550);
	clear_button->Name = L"clear_button";
	clear_button->Size = Size(150, 40);
	clear_button->TabIndex = 2;
	clear_button->Text = L"clear";
	clear_button->UseVisualStyleBackColor = true;
	clear_button->Click += gcnew EventHandler(cli_wrapper, &CLIWrapper::clickClearButton);

	// canvas
	PictureBox^ picture_box = gcnew PictureBox();
	(cli::safe_cast<ISupportInitialize^>(picture_box))->BeginInit();
	picture_box->BackColor = Color::White;
	picture_box->Location = Point(12, 12);
	picture_box->Name = L"canvas";
	picture_box->Size = Size(780, 530);
	picture_box->TabIndex = 3;
	picture_box->TabStop = false;
	picture_box->MouseMove += gcnew MouseEventHandler(cli_wrapper, &CLIWrapper::moveMouseOnTheCanvas);

	// AppMain
	Form^ main_form = gcnew Form();
	main_form->SuspendLayout();
	main_form->AutoScaleDimensions = SizeF(10, 20);
	main_form->AutoScaleMode = AutoScaleMode::Font;
	main_form->ClientSize = Size(800, 600);
	main_form->Controls->Add(picture_box);
	main_form->Controls->Add(clear_button);
	main_form->Controls->Add(undo_button);
	main_form->Name = L"AppMain";
	main_form->Text = L"AppMain";
	(cli::safe_cast<ISupportInitialize^>(picture_box))->EndInit();
	main_form->ResumeLayout(false);
	
	history = unique_ptr<HistoryCommand>(new HistoryCommand());
	canvas = unique_ptr<PaintingCanvas>(new PaintingCanvas(picture_box, history.get()));

	return main_form;
	// ˄
}

// ˅

// ˄
