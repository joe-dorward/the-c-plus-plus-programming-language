// Program: StringLength1.cpp
// Written by: Joe Dorward
// Date: 04/18/00

// This program demonstrates calls of the standard function strlen();

#include <iostream.h>
#include <string.h>

void main(void)
{
  unsigned int TheStringLength = 0;  // strlen() returns an unsigned integer

  char InputString[25] = "";


  cout << "Please enter a string: ";
  cin >> InputString;  

  TheStringLength = strlen(InputString);  // function call & assignment

  cout << "\n"
	   << "The string: "
	   << InputString 
	   << " Contains: "
	   << TheStringLength
	   << " characters "
	   << "\n";

  cout << "\n"
	   << "The string: "
	   << InputString 
	   << " Contains: "
	   << strlen(InputString)  // function call
	   << " characters "
	   << "\n";
}