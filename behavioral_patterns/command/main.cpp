#include <memory>
#include "AppMain.h"

using namespace std;

/*
Simple drawing application:
* Draw a path with points by dragging the mouse.
* Revert to one previous drawing by pressing the Undo button.
* Erase all drawing by pressing the Clear button.
 */

[STAThread]
int main()
{
	unique_ptr<AppMain> app_main(new AppMain());
	return 0;
}
