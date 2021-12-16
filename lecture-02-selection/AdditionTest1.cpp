// Program: AdditionTest.cpp
// Written by: Joe Dorward
//  Date: 05/10/00

// This program asks the user to enter two numbers:
// * asks the user what they add up to
// * checks the answer in an if() statement
// * prints out a right/wrong message

#include <iostream.h>

void main(void)
{
  int FirstNumber = 0,
      SecondNumber = 0,
      TheAnswer = 0;

  // Ask for a number
  cout << "Enter an integer: ";
  cin >> FirstNumber;

  // Ask for a number
  cout << "Enter an integer: ";
  cin >> SecondNumber;

  // Ask the question
  cout << "\nWhat does "
       << FirstNumber 
       << " + "
       << SecondNumber
       << " equal? ";

  cin >> TheAnswer;

  // Test the answer, and choose a message
  if (FirstNumber + SecondNumber == TheAnswer)
  {
    cout << "\nHey, you got it right! \n";
  }
  else
  {
    cout << "\nBoy did you get it wrong! \n";
  }
}
