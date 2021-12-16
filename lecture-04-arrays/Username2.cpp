// Program: Username2.cpp
// Written by: Joe Dorward
// Date: 03/30/00

// This program demonstrates inputing character strings using the getline() function

#include <iostream.h>  // list header files

void main(void)
{
  char TheUsername[25] = "";   // variable intialized empty


  cout << "Enter username: ";
  cin.getline(TheUsername,25,'\n');

  cout << "Welcome "
	   << TheUsername
	   << "\n";
}
