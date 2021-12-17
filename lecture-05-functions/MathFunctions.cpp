// Program: MathFunctions.cpp
// Written by: Joe Dorward
// Date: 04/18/00

// This program demonstrates a call of the standard function abs()

#include <iostream.h>
#include <math.h>

void main(void)
{
  int InputNumber = 0;

  // ask for a value
  cout << "Please enter a number: ";
  cin >> InputNumber;  

  // do output
  cout << "The absolute value of: "
       << InputNumber
       << " is: "
       << abs(InputNumber)  // function call
       << "\n";
}