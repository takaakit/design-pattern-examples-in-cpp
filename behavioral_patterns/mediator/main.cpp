#include <memory>
#include "AppLogin.h"

using namespace std;

// Login dialog for entering a username and password.

[STAThread]
int main()
{
	unique_ptr<AppLogin> app_login = unique_ptr<AppLogin>(new AppLogin());
	return 0;
}
