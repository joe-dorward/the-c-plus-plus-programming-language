// Program: TemperaturesOut.cpp
// Written by: Joe Dorward
// Date: 04/09/00

// This program has 7 integers, assigned into a 10 element array.
// It then uses a for() loop to run through the array, and print out those values.

#include <iostream.h>

void main(void)
{
  int ElementNumber = 0,  // loop counter
      TemperatureArray[10] = {65, 64, 67, 68, 70, 75, 72};

  //====================================================================
  // print out the values in the array

  for (ElementNumber = 0; ElementNumber < 10; ElementNumber++)
  {
	  cout << "The temperature in element: "
		     << ElementNumber
		     << " is : "
		     << TemperatureArray[ElementNumber]  // print value from array
		     << "\n";
  }
  cout << "\n\n";
}
