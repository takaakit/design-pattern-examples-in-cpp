#include <memory>
#include "AppLogin.h"

using namespace std;

[STAThread]
int main()
{
	unique_ptr<AppLogin> app_login(new AppLogin());
	return 0;
}
