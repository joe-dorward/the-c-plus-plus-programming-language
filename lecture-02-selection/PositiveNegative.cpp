// Program: PositiveNegative.cpp
// Written by: Joe Dorward
// Date: 03/18/00

// This program demonstrates the basic use of the if - else statement,
// by testing for a negative number.

#include <iostream.h>

void main(void)
{
int InputNumber;

  cout << "Enter an integer: ";
  cin >> InputNumber;

  if (InputNumber < 0)   // the number is negative
  {
    cout << "\n Not OK - "
         << "\n The number: "
         << InputNumber
         << " is negative. \n";
  }
  else
  {
    cout << "\n OK - "
         << "\n The number: "
         << InputNumber
         << " is positive. \n";
  }
}
