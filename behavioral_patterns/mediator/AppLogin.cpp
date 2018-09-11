// ˅
#include <iostream>
#include "behavioral_patterns/mediator/AppLogin.h"
#include "behavioral_patterns/mediator/ColleagueButton.h"
#include "behavioral_patterns/mediator/ColleagueRadioButton.h"
#include "behavioral_patterns/mediator/ColleagueTextField.h"

using namespace std;

// ˄

AppLogin::AppLogin()
	: colleague_radio_user(nullptr)
	, colleague_radio_guest(nullptr)
	, colleague_text_username(nullptr)
	, colleague_text_password(nullptr)
	, colleague_button_ok(nullptr)
	, colleague_button_cancel(nullptr)
	// ˅
	
	// ˄
{
	// ˅
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	createColleagues();
	Application::Run(main_form);
	// ˄
}

AppLogin::~AppLogin()
{
	// ˅
	
	// ˄
}

void AppLogin::colleagueChanged(Object^ sender, EventArgs^ e)
{
	// ˅
	if (colleague_button_ok->isPressed() == true
		|| colleague_button_cancel->isPressed() == true) {
		Application::Exit();
	}
	else {
		if (colleague_radio_guest->isSelected() == true) {	// Guest mode
			colleague_text_username->setActivation(false);
			colleague_text_password->setActivation(false);
			colleague_button_ok->setActivation(true);
		}
		else {												// Login mode
			colleague_text_username->setActivation(true);
			colleague_text_password->setActivation(true);

			// Judge whether the changed Colleage is enabled or disabled
			if (colleague_text_username->isEmpty() == false
				&& colleague_text_password->isEmpty() == false) {
				colleague_button_ok->setActivation(true);
			}
			else {
				colleague_button_ok->setActivation(false);
			}
		}
	}
	// ˄
}

void AppLogin::createColleagues()
{
	// ˅
	// radio_guest
	RadioButton^ radio_guest = gcnew RadioButton();
	radio_guest->AutoSize = true;
	radio_guest->Location = Point(20, 10);
	radio_guest->Name = L"radio_guest";
	radio_guest->Size = System::Drawing::Size(80, 20);
	radio_guest->TabIndex = 1;
	radio_guest->TabStop = true;
	radio_guest->Text = L"Guest";
	radio_guest->UseVisualStyleBackColor = true;
	colleague_radio_guest.reset(new ColleagueRadioButton(radio_guest, this));

	// radio_user
	RadioButton^ radio_user = gcnew RadioButton();
	radio_user->AutoSize = true;
	radio_user->Location = Point(130, 10);
	radio_user->Name = L"radio_user";
	radio_user->Size = System::Drawing::Size(80, 20);
	radio_user->TabIndex = 3;
	radio_user->TabStop = true;
	radio_user->Text = L"User";
	radio_user->UseVisualStyleBackColor = true;
	colleague_radio_user.reset(new ColleagueRadioButton(radio_user, this));

	// label_user_name
	Label^ label_user_name = gcnew Label();
	label_user_name->AutoSize = true;
	label_user_name->Location = Point(15, 55);
	label_user_name->Name = L"label_user_name";
	label_user_name->Size = System::Drawing::Size(100, 20);
	label_user_name->TabIndex = 4;
	label_user_name->Text = L"User Name:";

	// text_user_name
	TextBox^ text_user_name = gcnew TextBox();
	text_user_name->Location = Point(120, 50);
	text_user_name->Name = L"text_user_name";
	text_user_name->Size = System::Drawing::Size(200, 15);
	text_user_name->TabIndex = 5;
	colleague_text_username.reset(new ColleagueTextField(text_user_name, this));

	// label_password
	Label^ label_password = gcnew Label();
	label_password->AutoSize = true;
	label_password->Location = Point(15, 95);
	label_password->Name = L"label_password";
	label_password->Size = System::Drawing::Size(100, 20);
	label_password->TabIndex = 6;
	label_password->Text = L"Password:";

	// text_password
	TextBox^ text_password = gcnew TextBox();
	text_password->Location = Point(120, 90);
	text_password->Name = L"text_password";
	text_password->Size = System::Drawing::Size(200, 15);
	text_password->TabIndex = 7;
	text_password->PasswordChar = '*';
	colleague_text_password.reset(new ColleagueTextField(text_password, this));

	// button_ok
	Button^ button_ok = gcnew Button();
	button_ok->Location = Point(45, 135);
	button_ok->Name = L"button_ok";
	button_ok->Size = System::Drawing::Size(120, 30);
	button_ok->TabIndex = 8;
	button_ok->Text = L"OK";
	button_ok->UseVisualStyleBackColor = true;
	colleague_button_ok.reset(new ColleagueButton(button_ok, this));

	// button_cancel
	Button^ button_cancel = gcnew Button();
	button_cancel->Location = Point(195, 135);
	button_cancel->Name = L"button_cancel";
	button_cancel->Size = System::Drawing::Size(120, 30);
	button_cancel->TabIndex = 9;
	button_cancel->Text = L"Cancel";
	button_cancel->UseVisualStyleBackColor = true;
	colleague_button_cancel.reset(new ColleagueButton(button_cancel, this));

	// AppLogin
	main_form = gcnew Form();
	main_form->SuspendLayout();
	main_form->AutoScaleDimensions = SizeF(10, 18);
	main_form->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	main_form->ClientSize = System::Drawing::Size(350, 180);
	main_form->Controls->Add(button_cancel);
	main_form->Controls->Add(button_ok);
	main_form->Controls->Add(text_password);
	main_form->Controls->Add(label_password);
	main_form->Controls->Add(text_user_name);
	main_form->Controls->Add(label_user_name);
	main_form->Controls->Add(radio_user);
	main_form->Controls->Add(radio_guest);
	main_form->Name = L"AppLogin";
	main_form->Text = L"MyForm";
	main_form->ResumeLayout(false);
	main_form->PerformLayout();
	// ˄
}

// ˅

// ˄
