// Program: FileDemo.cpp
// Written by: Joe Dorward
// Date: 02/12/02

// This program demonstrates writing "data" to a file

#include <iostream.h>
#include <fstream.h>

int main(void)
{
  char YourName[15];

  ofstream OutputFile("Datafile.dat",ios::out);

  cout << "Enter your name: ";
  cin.getline(YourName,15);

  OutputFile << YourName;

  return(0);
}