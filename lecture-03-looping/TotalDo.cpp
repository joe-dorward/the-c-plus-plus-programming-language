// Program: TotalDo.cpp
// Written by: Joe Dorward
// Date: 05/30/00

// This program uses a do - while() loop, and asks the user for 5 numbers.
// The program totals these numbers, and calculates the average.

#include <iostream.h>

void main(void)
{
  int LoopCounter = 1,  // counts the number of times through the loop
      InputNumber = 0,
      TheTotal = 0,  // running total variable
      TheAverage = 0;


  do
  {
    cout << "Enter a number: ";
    cin >> InputNumber;

    TheTotal = TheTotal + InputNumber;  // add new value to running-total variable
    LoopCounter = LoopCounter + 1;  // increment loop-counter variable

  } while(LoopCounter <= 5);   // notice semi-colon here

  TheAverage = TheTotal / 5;

  cout << "\n"
       << "The total is: "
       << TheTotal
       << "\n";

  cout << "\n"
       << "The average is: "
       << TheAverage
       << "\n";
}
