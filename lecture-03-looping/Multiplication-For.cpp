// Program: Multiplication-For.cpp
// Written by: Joe Dorward
// Date: 03/19/00

// This program reads in an integer from the user,
// then writes out the multiplication-table for that integer.
 
// As a demonstration of the use of a for-loop, and field width specifiers.

#include <iostream.h>
#include <iomanip.h>

void main(void)
{
  int MultiplicationTable = 0,
      LineCounter = 0;

  cout << "          The Multiplication Table Program"
       << "\n";

  cout << "\n"
       << "Which Multiplication table do you want to see: ";
  cin >> MultiplicationTable;

  cout << "\n";

  for (LineCounter = 1; LineCounter < 13; LineCounter++)
  {
    cout << MultiplicationTable
         << " * "
         << setw(2) << LineCounter
         << " = "
         << setw(2) << MultiplicationTable * LineCounter
         << "\n";
  }
  cout << "\n";
}
