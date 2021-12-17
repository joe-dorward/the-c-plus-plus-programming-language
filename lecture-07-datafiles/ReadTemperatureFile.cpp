// Program: ReadTemperatureFile.cpp
// Written by: Joe Dorward
// Date: 08/11/02

// This program reads temperatures from a file, and prints them to the screen

#include <iostream.h>
#include <fstream.h>  // file stream header

void main(void)
{
  int NumberOfReadings = 0,
      CurrentTemperature = 0;

  ifstream InputFile("Temperatures1.dat");  // associate file-handle with input-stream

  InputFile >> CurrentTemperature;  // read data-value from input-file

  while ( !InputFile.eof() )  // loop while not at end-of-file
  {
    NumberOfReadings++;  // increment loop-counter

    cout << CurrentTemperature 
         << "\n";  // print data-value to screen

    InputFile >> CurrentTemperature;  // read data-value from input-file
  }
  InputFile.close();  // close datafile

  cout << "------------------------\n"
       << NumberOfReadings
       << " temperatures in file. "
       << "\n\n";
}
