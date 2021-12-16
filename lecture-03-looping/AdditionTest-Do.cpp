// Program: AdditionTest-Do.cpp
// Written by: Joe Dorward
// Date: 05/30/00

// This program asks the user for two numbers.
// It then asks the user what they add up to.
// It then checks the answer in an if() statement,	and prints out a right/wrong message.

// It will ask repeatedly for an answer until a correct one is entered.

#include <iostream.h>

void main(void)
{
  int FirstNumber = 0,
      SecondNumber = 0,
		  TheAnswer = 0,
      MyFlag = 0;   // flag for text condition

  
  // Ask for a number
  cout <<  "Enter an integer: ";
 	cin >> FirstNumber;

 	// Ask for a number
  cout <<  "Enter an integer: ";
 	cin >> SecondNumber;


  do
  {
  	// Ask the question
    cout << "+------------------------+";
  	cout << "\n"
         << "What does "
         << FirstNumber
         << " + "
         << SecondNumber
         << " = ";
  	cin >> TheAnswer;

  	// Test the answer, and choose a message
  	if (FirstNumber + SecondNumber == TheAnswer)
    {
  		cout << "\n"
           << "Hey, you got it right!"
           << "\n";
      MyFlag = 1;
    }
  	else
    {
  		cout << "\n"
           << "Boy did you get it wrong!"
           << "\n"
           << "Try again! \n";
    }

  } while(MyFlag == 0);
}
