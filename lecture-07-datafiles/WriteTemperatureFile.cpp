// Program: WriteTemperatureFile.cpp
// Written by: Joe Dorward
// Date: 08/11/02

// This program gets temperatures from the user, and writes them to a file

#include <iostream.h>
#include <fstream.h>  // file stream header

void main(void)
{
  int NumberOfReadings = 0,
      CurrentTemperature = 0;

  ofstream OutputFile("Temperatures3.dat");  // associate file-handle with output-stream

  cout << "Enter temperature (999 to stop): ";  // get data-value
  cin >> CurrentTemperature;

  while ( CurrentTemperature != 999 )  // loop while not at end-of-file
  {
    NumberOfReadings++;  // increment loop-counter

    OutputFile << CurrentTemperature 
               << "\n";  // print data-value to screen

  cout << "Enter temperature (999 to stop): ";  // get data-value
  cin >> CurrentTemperature;
  }
  OutputFile.close();  // close datafile

  cout << "------------------------\n"
       << NumberOfReadings
       << " temperatures in file. "
       << "\n\n";
}
