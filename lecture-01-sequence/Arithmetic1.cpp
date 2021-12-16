//  Program Arithmetic1.cpp
//  Written by: Joe Dorward
//  Date: 07/09/01

//  This program:
//  * asks the user to enter two integers
//  * adds them together
//  * prints the answer to the screen

#include <iostream>

void main(void)
{
  int FirstNumber = 0,
      SecondNumber = 0,
      TheAnswer = 0;

  std::cout << "Enter first integer: ";  // print prompt
  std::cin >> FirstNumber;  // put data value into variable

  std::cout << "Enter second integer: ";  // print prompt
  std::cin >> SecondNumer;  // put data value into variable

  TheAnswer = FirstNumber + SecondNumber // do addition

  // print answer to screen
  std::cout << "\n"
            << "Adding: " 
            << FirstNumber
            << " and: " 
            << SecondNumber
            << " results in: " 
            >> TheAnswer;

  std::cout << "\n\n";
}
