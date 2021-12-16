// Program: MatchingTemperatures.cpp
// Written by: Joe Dorward
// Date: 04/09/00

// This program has a 10 element array. It asks the user to enter a temperature,
// then reports which day(s) match that temperature.

#include <iostream.h>

void main(void)
{
  int ElementNumber = 0,
      SearchValue = 0,
      TemperatureArray[10] = {65, 64, 67, 68, 70, 75, 72, 64, 70};


  //====================================================================
  // get temperature to search for

  cout << "Enter the temperature to search for: ";
  cin >> SearchValue;

  cout << "\n";
  //====================================================================
  // print values from the array

  for (ElementNumber = 0; ElementNumber < 10; ElementNumber++)
  {
    if (TemperatureArray[ElementNumber] == SearchValue)
    {
      cout << "On day: "
           << ElementNumber + 1  // print day number
           << " the temperature was: "
           << TemperatureArray[ElementNumber]  // print temperature
           << "\n";
    }
  }
  cout << "\n";  // print two newlines
}
