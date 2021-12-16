// Program: TotalWhile.cpp
// Written by: Joe Dorward
// Date: 05/30/00

// Using a while() loop, his program asks the user for 5 numbers.
// The program totals these numbers, and calculates the average.

#include <iostream.h>

void main(void)
{
  int LoopCounter = 1,
      InputNumber = 0,
      TheTotal = 0,
      TheAverage = 0;


  while (LoopCounter <= 5)
  {
    cout << "Enter a number: ";
    cin >> InputNumber;

    TheTotal = TheTotal + InputNumber;  // add new value to running-total variable
    LoopCounter = LoopCounter + 1;  // increment loop-counter variable
  }

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
