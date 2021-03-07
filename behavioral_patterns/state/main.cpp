#include <memory>
#include "AppSafe.h"

using namespace std;

[STAThread]
int main()
{
	unique_ptr<AppSafe> app_login(new AppSafe());
	return 0;
}
