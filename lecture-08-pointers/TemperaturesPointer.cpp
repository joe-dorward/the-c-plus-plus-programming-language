// Program: TemperaturesPointer.cpp
// Written by: Joe Dorward
// Date: 10/03/01

// This program uses functions with pointers to find the highest and lowest 
// integer values in an array

#include <iostream.h>

int FindHighestInteger(const int *);  // function prototypes
int FindLowestInteger(const int *);

void main(void)
{
  int LowestTemperature = 0,
      HighestTemperature = 0,
      TemperatureRange = 0,  // contains the difference between the highest & lowest temperatures
      TemperatureArray[25] = {90, 97, 87, 85, 77, 79, 98, 68, 75, 84, 55, 43, 32, 66, 88};

  // find highest temperature
  HighestTemperature = FindHighestInteger(TemperatureArray);

  cout << "The highest temperature was: "
       << HighestTemperature
       << "\n";
}
// ========================================================================
int FindHighestInteger(const int *IntegerPointer)
{
  // This function will find the highest value in any integer array

  int HighestInteger = -1000;

  while (*IntegerPointer != 0)  // while the value pointed to isn't zero/null
  {
    if (*IntegerPointer > HighestInteger)
    {
      HighestInteger = *IntegerPointer;
    }
    IntegerPointer++;
  }
  return(HighestInteger);
}
// ========================================================================
