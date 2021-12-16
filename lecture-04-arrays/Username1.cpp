// Program: Username1.cpp
// Written by: Joe Dorward
// Date: 03/30/00

// This program demonstrates inputing character strings with the cin function

#include <iostream.h>   // list header files

void main(void)
{
  char TheUsername[25] = "";   // variable intialized empty

  cout << "Enter username: ";
  cin >> TheUsername;

  cout << "Welcome: "
	     << TheUsername
	     << "\n";
}
