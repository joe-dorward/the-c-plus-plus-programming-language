// Program: ValueAddressPoint1.cpp
// Written by: Joe Dorward
// Date: 08/11/02

// This program prints the value, and memory address of an integer variable

#include <iostream.h>

void main(void)
{
  int InputNumber = 17;

  // print the value of the variable
  cout << "The value, is: "
       << InputNumber
       << "\n";

  // print the memory address of the variable
  cout << "The address, is: "
       << &InputNumber
       << "\n";
}