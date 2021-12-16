// Program: StringCopy1.cpp
// Written by: Joe Dorward
// Date: 04/18/00

// This program demonstrates a call of the standard function strcpy();

#include <iostream.h>
#include <string.h>

void main(void)
{
  char FirstString[25] = "",
       SecondString[25] = "";

  // do input
  cout << "Enter the first string: ";
  cin >> FirstString;
  
  cout << "Enter the second string: ";
  cin >> SecondString;

  // do first output
  cout << "\n"
	   << "The first string is: "
	   << FirstString
       << "\n"
       << "The second string is: "
	   << SecondString
	   << "\n";

  // copy the second string over the first string
  strcpy(FirstString,SecondString); 
  
    // do second output
  cout << "\n"
	   << "The first string is now: "
	   << FirstString
       << "\n"
       << "The second string is still: "
	   << SecondString
	   << "\n";   
}