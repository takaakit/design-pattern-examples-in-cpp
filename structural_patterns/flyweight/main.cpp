#include <string>
#include <iostream>
#include <memory>
#include "structural_patterns/flyweight/LargeSizeCharFactory.h"
#include "structural_patterns/flyweight/LargeSizeString.h"

using namespace std;

/*
Display a string consisting of large characters (0-9 digits only). Large character objects are not created until they are needed. And the created objects are reused.

Example Output
-----
Please enter digits (ex. 1212123): 123
              
     ####     
      ###     
      ###     
      ###     
      ###     
      ###     
    #######   
              

              
   ########   
         ###  
         ###  
   ########   
  #           
  #           
  ##########  
              

              
   ########   
         ###  
         ###  
   ########   
         ###  
  #      ###  
   ########
 */

int main(int argc, char* argv[]) {
	cout << "Please enter digits (ex. 1212123):" << endl;
	string input_value = "";
	cin >> input_value;

	unique_ptr<LargeSizeString> lss(new LargeSizeString(input_value));
	lss->display();

	return 0;
}
