#include "WindowsForm.h"

System::Windows::Forms::PictureBox^ command::WindowsForm::getPictureBox()
{
	return this->picture_box;
}

System::Windows::Forms::Button^ command::WindowsForm::getButtonUndo()
{
	return this->button_undo;
}

System::Windows::Forms::Button^ command::WindowsForm::getButtonClear()
{
	return this->button_clear;
}
