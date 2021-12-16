// Program: Output.cpp
// Written By: Joe Dorward
// Date: 07/20/02

// This program assigns value to variables, then prints them out

#include <iostream.h>

void main(void)
{
  int OutputInteger = 21;  // declare and initialize an integer variable

  char OutputCharacter = '@';  // declare and initialize a character variable

  float OutputFloat = 3.14f;  // declare and initialize a float variable

  // output header text
  cout << "* * * Output The Data-Values * * *"
       << "\n\n";

  // output integer
  cout << "The integer value is: " 
       << OutputInterger 
       << "\n";

  // output character
  cout << "The character value is: " 
       << OutputCharacter 
       << "\n";

  // output float
  cout << "The float value is: " 
       << OutputFloat 
       << "\n\n";
}
