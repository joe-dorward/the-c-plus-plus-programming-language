// Program HighLow.cpp
// Written by: Joe Dorward
// Date: 05/10/00

// This program reads in two integers, compares their value, and prints 
// them to the screen in order the lowest first

#include <iostream.h>

void main(void)
{
  int FirstNumber = 0,
      SecondNumber = 0;


  // Ask for a number
  cout << "Enter an integer: ";
  cin >> FirstNumber;

  // Ask for a number
  cout << "Enter an integer: ";
  cin >> SecondNumber;

  // Test the numbers, and choose the message
  if (FirstNumber < SecondNumber)
	{
    cout << "The first number: "
         << FirstNumber
         << " is lower than the second number: "
         << SecondNumber
         << "\n";
	}
	else 
  {
    cout << "The second number: "
         << SecondNumber
         << " is lower than the first number: "
         << FirstNumber
         << "\n";
	}
}
