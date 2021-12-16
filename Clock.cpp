//  Program: Clock.cpp
//  Written by: Joe Dorward
//  Date: 03/12/00

//  This program demonstrates the use of the modulus (remainder) operator %

#include <iostream.h>

void main(void)
{
  int InputMinutes = 0,
      OutputHours = 0,
      OutputMinutes = 0;

  cout << "Enter the total number of minutes: ";
  cin >> InputMinutes;

  OutputHours = InputMinutes / 60;
  OutputMinutes = InputMinutes % 60;

  cout << "\n";

  cout << "The hours are: " 
       << OutputHours 
       << "\n";

  cout << "The minutes are: " 
       << OutputMinutes 
       << "\n\n";
}

