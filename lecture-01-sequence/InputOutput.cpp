// Program: InputOutput.cpp
// Written By: Joe Dorward
// Date: 07/20/02

// This program asks the user to input an integer, character, and float 
// values, before outputting them

#include <iostream.h>

void main(void)
{
  int InputInteger = 0;  // declare and initialize an integer variable

  char InputCharacter = ' ';  // declare and initialize a character variable

  float InputFloat = 0.0f;  // declare and initialize a float variable

  // ----------------------------------------------------------------
  // get integer value
  cout << "Enter the integer: ";
  cin >> InputInteger;

  // get character value
  cout << "Enter the character: ";
  cin >> InputCharacter;

  // get float value
  cout << "Enter the float: ";
  cin >> InputFloat;

  // ----------------------------------------------------------------
  // output header text
  cout << "\n"
       << "* * * Output The Data-Values * * *"
       << "\n\n";

  // output integer
  cout << "The integer value is: " 
       << InputInteger 
       << "\n";

  // output character
  cout << "The character value is: " 
       << InputCharacter 
       << "\n";

  // output float
  cout << "The float value is: " 
       << InputFloat 
       << "\n\n";
}
