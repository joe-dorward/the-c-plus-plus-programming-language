// Program: ValueAddressPoint2.cpp
// Written by: Joe Dorward
// Date: 05/03/00

// This program prints the value of two integer variables, and their addresses
// using a pointer

#include <iostream.h>

void main(void)
{
  int InputNumber = 3,
      *PointerToIntegers;  // create an integer pointer


  // assign the address of the variable to the pointer
  PointerToIntegers = &InputNumber;

  // -------------------------------------------------------------------------

  // print the value of the variable
  cout << "The value, is: "
       << InputNumber
       << "\n";

  // print the memory address of the variable
  cout << "The address, is: "
       << &InputNumber
       << "\n";

  // -------------------------------------------------------------------------
  cout << "----------------------------------------\n";

  // print the value of the variable
  cout << "The value pointed to, is: "
       << *PointerToIntegers
       << "\n";

  // print the memory address of the variable
  cout << "The address pointed to, is: "
       << PointerToIntegers
       << "\n\n";
}