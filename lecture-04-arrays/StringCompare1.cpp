// Program: StringCompare1.cpp
// Written by: Joe Dorward
// Date: 04/18/00

// This program demonstrates a call of the standard function strcmp();

#include <iostream.h>
#include <string.h>

void main(void)
{
  char FirstString[25] = "",
       SecondString[25] = "";

  
  cout << "Enter the first string: ";
  cin >> FirstString;
  
  cout << "Enter the second string: ";
  cin >> SecondString;

  // the two strings are the same
  if ( strcmp(FirstString,SecondString) == 0 )
  {
    cout << "\n ** First if. \n"
         << "\n"
		 << "The strings: "
		 << FirstString
         << " and: "
		 << SecondString
		 << " are the same. \n\n";
  }


  // first is first
  if ( strcmp(FirstString,SecondString) < 0 )
  {
    cout << "\n ** Second if. \n"
         << "\n"
		 << "The string: "
		 << FirstString
         << " comes before the string: "
		 << SecondString
		 << "\n\n";
  }


  // second is first
  if ( strcmp(FirstString,SecondString) > 0 )
  {
    cout << "\n ** Third if. \n"
         << "\n"
		 << "The string: "
		 << SecondString
         << " comes before the string: "
		 << FirstString
		 << "\n\n";
  }
}