// Program: ToLowercaseFunction.cpp
// Written by: Joe Dorward
// Date: 04/22/00

// The function in this program, returns the lowercase version of an uppercase letter

#include <iostream.h>

char ToLowercase(char);  // function prototype

void main(void)
{
  char InputCharacter = ' ';


  cout<< "Enter an uppercase letter: ";
  cin >> InputCharacter;  

  cout << "\n"
       << "The lowercase version of: " 
       << InputCharacter
       << " is: "
       << ToLowercase(InputCharacter)  // function call
       << "\n";
}
// ======================================================================
char ToLowercase(char Character)  // function definition
{
  return(Character + 32);
}
// ======================================================================
