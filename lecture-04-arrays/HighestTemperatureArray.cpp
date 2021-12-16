// Program: HighestTemperatureArray.cpp
// Written By: Joe Dorward
// Date: 04/24/02

// This program searches for, and reports the highest temperature in an array

#include <iostream.h>

void main(void)
{
  int ElementNumber = 0,  // loop counter
      TemperatureArray[10] = {65, 64, 67, 68, 70, 75, 72},
      HighestTemperature = -1000;

  //====================================================================
  // print out the values in the array

  for (ElementNumber = 0; ElementNumber < 10; ElementNumber++)
  {
    if (TemperatureArray[ElementNumber] > HighestTemperature)
    {
      HighestTemperature = TemperatureArray[ElementNumber];
    }
  }
  cout << "The highest temperature is: "
       << HighestTemperature
       << " degrees."
		   << "\n\n";
}

