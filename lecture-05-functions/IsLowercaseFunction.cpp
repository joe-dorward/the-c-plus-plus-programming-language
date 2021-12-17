// Program: IsLowercaseFunction.cpp
// Written by: Joe Dorward
// Date: 04/22/00

// The function in this program, returns a 1 if its character parameter
// is a lowercase letter, and 0 otherwise.

#include <iostream.h>

int IsLowercase(char);  // function prototype

void main(void)
{
  char InputCharacter = ' ';


  cout << "Enter a lowercase letter: ";
  cin >> InputCharacter;
  

  if (IsLowercase(InputCharacter) == 1)  // function call in test condition
  {
    cout << "\n"
         << "The character: "
         << InputCharacter
         << " is a lowercase letter."
         << "\n";
  }
  else
  {
    cout << "\n"
         << "The character: "
         << InputCharacter
         << " is NOT a lowercase letter."
         << "\n";
  }
}
// ==================================================================
int IsLowercase(char Character)  // function definition
{
  if ( (Character >= 'a') && (Character <= 'z') )
  {
    return(1);
  }
  else
  {
    return(0);
  }
}
// ==================================================================