// Program: ArithmeticPointers.cpp
// Written by: Joe Dorward
// Date: 04/19/01

// This program does arithmetic by passing pointers to a single function

#include <iostream.h>

void Arithmetic(int *, int *, int *);   // function prototype

void main(void)
{
  int FirstNumber = 0,
      SecondNumber = 0,
      Added = 0;

  cout << "Enter the first number: ";
  cin >> FirstNumber;

  cout << "Enter the second number: ";
  cin >> SecondNumber;

  Arithmetic(&FirstNumber,&SecondNumber,&Added);   // call the function

  // --------------------------------------------------------------------------

  // do addition output
  cout << "\n"
       << FirstNumber
       << " + " 
       << SecondNumber
       << " = "
       << Added
       << "\n";

  cout << "\n";
}
// ============================================================================
void Arithmetic(int *First, int *Second, int *Add)  // function definition
{
  *Add = *First + *Second;   // do addition
}
