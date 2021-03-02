// ˅
#include <iostream>
#include "behavioral_patterns/mediator/AppLogin.h"
#include "behavioral_patterns/mediator/ColleagueButton.h"
#include "behavioral_patterns/mediator/ColleagueRadioButton.h"
#include "behavioral_patterns/mediator/ColleagueTextField.h"

using namespace std;

// ˄

AppLogin::AppLogin()
	: radio_user(nullptr)
	, radio_guest(nullptr)
	, text_username(nullptr)
	, text_password(nullptr)
	, button_ok(nullptr)
	, button_cancel(nullptr)
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
	if (radio_user != nullptr) {
		delete radio_user;
	}
	if (radio_guest != nullptr) {
		delete radio_guest;
	}
	if (text_username != nullptr) {
		delete text_username;
	}
	if (text_password != nullptr) {
		delete text_password;
	}
	if (button_ok != nullptr) {
		delete button_ok;
	}
	if (button_cancel != nullptr) {
		delete button_cancel;
	}
	// ˄
}

void AppLogin::colleagueChanged(Object^ sender, EventArgs^ e)
{
	// ˅
	if (button_ok->isPressed() == true
		|| button_cancel->isPressed() == true) {
		Application::Exit();
	}
	else {
		if (radio_guest->isSelected() == true) {	// Guest mode
			text_username->setActivation(false);
			text_password->setActivation(false);
			button_ok->setActivation(true);
		}
		else {										// Login mode
			text_username->setActivation(true);
			text_password->setActivation(true);

			// Judge whether the changed Colleage is enabled or disabled
			if (text_username->isEmpty() == false
				&& text_password->isEmpty() == false) {
				button_ok->setActivation(true);
			}
			else {
				button_ok->setActivation(false);
			}
		}
	}
	// ˄
}

void AppLogin::createColleagues()
{
	// ˅
	// radio_guest
	RadioButton^ forms_radio_guest = gcnew RadioButton();
	forms_radio_guest->AutoSize = true;
	forms_radio_guest->Location = Point(20, 10);
	forms_radio_guest->Name = L"radio_guest";
	forms_radio_guest->Size = System::Drawing::Size(80, 20);
	forms_radio_guest->TabIndex = 1;
	forms_radio_guest->TabStop = true;
	forms_radio_guest->Text = L"Guest";
	forms_radio_guest->UseVisualStyleBackColor = true;
	radio_guest = new ColleagueRadioButton(forms_radio_guest, this);

	// radio_user
	RadioButton^ forms_radio_user = gcnew RadioButton();
	forms_radio_user->AutoSize = true;
	forms_radio_user->Location = Point(130, 10);
	forms_radio_user->Name = L"radio_user";
	forms_radio_user->Size = System::Drawing::Size(80, 20);
	forms_radio_user->TabIndex = 3;
	forms_radio_user->TabStop = true;
	forms_radio_user->Text = L"User";
	forms_radio_user->UseVisualStyleBackColor = true;
	radio_user = new ColleagueRadioButton(forms_radio_user, this);

	// label_user_name
	Label^ forms_label_user_name = gcnew Label();
	forms_label_user_name->AutoSize = true;
	forms_label_user_name->Location = Point(15, 55);
	forms_label_user_name->Name = L"label_user_name";
	forms_label_user_name->Size = System::Drawing::Size(100, 20);
	forms_label_user_name->TabIndex = 4;
	forms_label_user_name->Text = L"User Name:";

	// text_user_name
	TextBox^ forms_text_username = gcnew TextBox();
	forms_text_username->Location = Point(120, 50);
	forms_text_username->Name = L"text_user_name";
	forms_text_username->Size = System::Drawing::Size(200, 15);
	forms_text_username->TabIndex = 5;
	text_username = new ColleagueTextField(forms_text_username, this);

	// label_password
	Label^ forms_label_password = gcnew Label();
	forms_label_password->AutoSize = true;
	forms_label_password->Location = Point(15, 95);
	forms_label_password->Name = L"label_password";
	forms_label_password->Size = System::Drawing::Size(100, 20);
	forms_label_password->TabIndex = 6;
	forms_label_password->Text = L"Password:";

	// text_password
	TextBox^ forms_text_password = gcnew TextBox();
	forms_text_password->Location = Point(120, 90);
	forms_text_password->Name = L"text_password";
	forms_text_password->Size = System::Drawing::Size(200, 15);
	forms_text_password->TabIndex = 7;
	forms_text_password->PasswordChar = '*';
	text_password = new ColleagueTextField(forms_text_password, this);

	// button_ok
	Button^ forms_button_ok = gcnew Button();
	forms_button_ok->Location = Point(45, 135);
	forms_button_ok->Name = L"button_ok";
	forms_button_ok->Size = System::Drawing::Size(120, 30);
	forms_button_ok->TabIndex = 8;
	forms_button_ok->Text = L"OK";
	forms_button_ok->UseVisualStyleBackColor = true;
	button_ok = new ColleagueButton(forms_button_ok, this);

	// button_cancel
	Button^ forms_button_cancel = gcnew Button();
	forms_button_cancel->Location = Point(195, 135);
	forms_button_cancel->Name = L"button_cancel";
	forms_button_cancel->Size = System::Drawing::Size(120, 30);
	forms_button_cancel->TabIndex = 9;
	forms_button_cancel->Text = L"Cancel";
	forms_button_cancel->UseVisualStyleBackColor = true;
	button_cancel = new ColleagueButton(forms_button_cancel, this);

	// AppLogin
	main_form = gcnew Form();
	main_form->SuspendLayout();
	main_form->AutoScaleDimensions = SizeF(10, 18);
	main_form->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	main_form->ClientSize = System::Drawing::Size(350, 180);
	main_form->Controls->Add(forms_button_cancel);
	main_form->Controls->Add(forms_button_ok);
	main_form->Controls->Add(forms_text_password);
	main_form->Controls->Add(forms_label_password);
	main_form->Controls->Add(forms_text_username);
	main_form->Controls->Add(forms_label_user_name);
	main_form->Controls->Add(forms_radio_user);
	main_form->Controls->Add(forms_radio_guest);
	main_form->Name = L"AppLogin";
	main_form->Text = L"MyForm";
	main_form->ResumeLayout(false);
	main_form->PerformLayout();
	// ˄
}

// ˅

// ˄
