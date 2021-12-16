//  Program Arithmetic2.cpp
//  Written by: Joe Dorward
//  Date: 07/09/01

//  This program:
//  * asks the user to enter two integers
//  * adds them together
//  * prints the answer to the screen

#include <iostream.h>

void main(void)
{
  int FirstNumber = 0,
      SecondNumber = 0;

  cout << "Enter first integer: ";  // print prompt
  cin >> FirstNumber;  // put data value into variable

  cout << "Enter second integer: ";  // print prompt
  cin >> SecondNumber;  // put data value into variable

  // print answer to screen
  cout << "\n"
       << "Adding: " 
       << FirstNumber
       << " and: " 
       << SecondNumber
       << " results in: " 
       << FirstNumber + SecondNumber;

  cout << "\n\n";
}