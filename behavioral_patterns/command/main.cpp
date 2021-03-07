/*
#include "WindowsForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew command::WindowsForm());
	return 0;
}
*/

#include <memory>
#include "AppMain.h"

using namespace std;

[STAThread]
int main()
{
	unique_ptr<AppMain> app_login(new AppMain());
	return 0;
}
