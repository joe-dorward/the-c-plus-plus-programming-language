// Program: DemonstrateRepeat.cpp
// Written By: Joe Dorward
// Date: 03/25/02

// This program demonstrates how to make a program repeat
// Program Statements at the user's request

#include <iostream.h>

void main(void)
{
  char TheChoice = ' ';

  do
  {
    // repeated Program Statements go here

    cout << "Repeat? (Y/N) ";
    cin >> TheChoice;

  } while (TheChoice == 'Y');

  cout << "\n"
       << "Finished!"
       << "\n";
}

