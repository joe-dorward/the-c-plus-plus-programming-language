// Program: TemperaturesInOut.cpp
// Written by: Joe Dorward
// Date: 04/09/00

// This program ask the user to enter an temperature value 7 times storing
// each temperature value in an integer array.

// It then uses a for() loop to run through the array, and print out those values.

#include <iostream.h>
#include <iomanip.h>

void main(void)
{
  int ElementNumber = 0,  // loop counter
      TemperatureArray[10] = {0};


  //====================================================================
  // get temperature values for array

  for (ElementNumber = 0; ElementNumber < 7; ElementNumber++)
  {
    cout << "Enter today\'s temperature: ";
		cin >> TemperatureArray[ElementNumber];  // put value in array
  }

  //====================================================================
  // write temperature values from array
  cout << "============================="
       << "\n";

  for (ElementNumber = 0; ElementNumber < 10; ElementNumber++)
  {
	  cout << "The temperature in element: "
		     << setw(2) << ElementNumber + 1
		     << " is : "
		     << TemperatureArray[ElementNumber]  // print value from array
		     << "\n";
  }
  cout << "\n";
}
