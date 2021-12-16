// Program: TollBooth.cpp
// Written by: Joe Dorward
// Date: 05/30/00

// This is a highway toll-both simulation program.
// It asks the user to enter the number of passengers in each car that passes 
// through a toll-booth, keeping track of the number of cars, and passengers.

// When a negative number for passengers is entered, the program ends, and prints 
// the total number of passengers and cars that have passed through the toll-booth.

#include <iostream.h>

void main(void)
{
  int NumberOfPassengers = 0,
      NumberOfCars = 0,
      TotalPassengers = 0;  // running total


  cout << "How many passengers in the vehicle: ";
  cin >> NumberOfPassengers;

  while (NumberOfPassengers > 0)
  {
    NumberOfCars++;   // increment car counter
    TotalPassengers = TotalPassengers + NumberOfPassengers;

    cout << "How many passengers in the vehicle: ";
    cin >> NumberOfPassengers;
  } 

  cout << "\n" 
       << "There have been: "
       << NumberOfCars
       << " vehicles."
       << "\n"
       << "With a total of: "
       << TotalPassengers
       << " passengers."
       << "\n";
}
