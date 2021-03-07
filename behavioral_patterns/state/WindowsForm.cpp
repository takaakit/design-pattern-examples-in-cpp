#include "WindowsForm.h"

System::Windows::Forms::TextBox^ state::WindowsForm::getTextTime()
{
    return this->text_time;
}

System::Windows::Forms::TextBox^ state::WindowsForm::getTextMessage()
{
    return this->text_message;
}

System::Windows::Forms::Button^ state::WindowsForm::getButtonUse()
{
    return this->button_use;
}

System::Windows::Forms::Button^ state::WindowsForm::getButtonAlarm()
{
    return this->button_alarm;
}

System::Windows::Forms::Button^ state::WindowsForm::getButtonPhone()
{
    return this->button_phone;
}

System::Windows::Forms::Button^ state::WindowsForm::getButtonExit()
{
    return this->button_exit;
}
