// Program: CharactersOut.cpp
// Written by: Joe Dorward
// Date: 03/09/00

// This program writes out characters from an array to the screen

#include <iostream.h>
#include <iomanip.h>
#include <string.h>

void main(void)
{
  unsigned int ElementNumber = 0;  // the current string element starts at zero

  //char InputString[50] = "Isn't this fun?";
  char InputString[50] = {'I', 's', 'n', '\'', 't', ' ', 't', 'h', 'i', 's', ' ', 'f', 'u', 'n', '?'};
  

  // -------------------------------------------------------
  // do output

  while ( ElementNumber < strlen(InputString) )
  //while ( InputString[ElementNumber] != '\0' )
  {
    cout << "The character in element: "
         << setw(2) << ElementNumber
         << " is : "
         << InputString[ElementNumber]  // print current character
         << "\n";

    ElementNumber++;
  }
  cout << "\n";
}
