//  Program: Format2.cpp
//  Written by: Joe Dorward
//  Date: 03/12/00

//  This program demonstrates formatted integer & real output

#include <iostream.h>
#include <iomanip.h>

void main(void)
{
  cout << "Print the integers" 
       << "\n\n";

  cout << setw(4) << 31 << "\n"
       << setw(4) << 4 << "\n"
       << setw(4) << 321 << "\n"
       << setw(4) << 6 << "\n\n";

  cout << "Now the reals" 
       << "\n\n";

  cout << "\n" << setiosflags(ios::fixed | ios::showpoint) << setprecision(2)
       << setw(8) << 78.30 << "\n"
       << setw(8) << 3.141592654 << "\n"
       << setw(8) << 126.49 << "\n"
       << setw(8) << 2200.59 << "\n\n";
}
