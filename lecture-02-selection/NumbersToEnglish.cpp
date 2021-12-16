// Program: NumbersToEnglish.cpp
// Written by: Joe Dorward
// Date: 05/15/00

// This program asks the user for a whole-number in the range 0 - 9,
// then prints out the number in English.

#include <iostream.h>

void main(void)
{
  int TheNumber = 0;

  cout << "Enter a whole-number (0 - 9): ";
  cin >> TheNumber;
 
  if (TheNumber == 0)
  {
    cout << "\n Zero. \n";
  }
  else if (TheNumber == 1)
  {
    cout << "\n One. \n";
  }
  else if (TheNumber == 2)
  {
    cout << "\n Two. \n";
  }
}
