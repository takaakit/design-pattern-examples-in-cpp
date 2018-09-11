#include <memory>
#include "AppMain.h"

using namespace std;

// Simple drawing application.

[STAThread]
int main()
{
	unique_ptr<AppMain> app_main = unique_ptr<AppMain>(new AppMain());
	return 0;
}
