#include <memory>
#include "AppLogin.h"

using namespace std;

/*
Show a login dialog for entering a username and password. The dialog has the following elements:
* "Guest" and "Login" radio buttons
* "Username" and "Password" text fields
* "OK" and "Cancel" buttons

And change the editable properties of the elements depending on the state of the radio buttons and text fields.
 */

[STAThread]
int main()
{
	unique_ptr<AppLogin> app_login = unique_ptr<AppLogin>(new AppLogin());
	return 0;
}
