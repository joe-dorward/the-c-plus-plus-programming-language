// Program: PassIntegerByReference.cpp
// Written by: Joe Dorward
// Date: 08/11/02

// This program passes a variable by-reference to an incrementing function

#include <iostream.h>

void Increment(int *);

void main(void)
{
  int InputNumber = 0;

  cout << "Enter an integer: ";
  cin >> InputNumber;

  Increment(&InputNumber);

  cout << "The value is: "
       << InputNumber
       << "\n";
}
// ----------------------------------------------------------------------------
void Increment(int *Number)
{
  *Number = *Number + 1;
}
// ----------------------------------------------------------------------------