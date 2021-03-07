#include "WindowsForm.h"

System::Windows::Forms::RadioButton^ mediator::WindowsForm::getFormsRadioGuest()
{
	return this->forms_radio_guest;
}

System::Windows::Forms::RadioButton^ mediator::WindowsForm::getFormsRadioLogin()
{
	return this->forms_radio_login;
}

System::Windows::Forms::TextBox^ mediator::WindowsForm::getFormsTextUsername()
{
	return this->forms_text_username;
}

System::Windows::Forms::TextBox^ mediator::WindowsForm::getFormsTextPassword()
{
	return this->forms_text_password;
}

System::Windows::Forms::Button^ mediator::WindowsForm::getFormsButtonOk()
{
	return this->forms_button_ok;
}

System::Windows::Forms::Button^ mediator::WindowsForm::getFormsButtonCancel()
{
	return this->forms_button_cancel;
}
