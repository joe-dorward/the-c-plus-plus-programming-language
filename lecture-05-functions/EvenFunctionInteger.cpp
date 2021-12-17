// Program: EvenFunctionInteger.cpp
// Written by: Joe Dorward
// Date: 04/20/00

// This program demonstrates writing, and calling a function that 
// decides if a number is odd or even

#include <iostream.h>

int IsItEven1(int);   // function prototype

void main(void)
{
  int NumberOne = 0;

  cout << "\n"
       << "Enter an number: ";
  cin >> NumberOne;
  

  if (IsItEven1(NumberOne) == 1)  // function call checking return value
  {
    cout << "\n"
         << "The integer "
         << NumberOne
         << " is even."
         << "\n";
  }
  else
  {
    cout << "\n"
         << "The integer "
         << NumberOne
         << " is odd."
         << "\n";
  }
}
/* ====================================================================== */
int IsItEven1(int TheNumber)  // function definition
{
  if (TheNumber % 2 == 0)  // its an even number
  { 
    return(1);
  }
  else
  {
    return(0);
  }
}
/* ====================================================================== */
