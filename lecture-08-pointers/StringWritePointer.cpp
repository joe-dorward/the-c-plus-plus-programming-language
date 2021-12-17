// Program: StringWritePointer.cpp
// Written by: Joe Dorward
// Date: 10/29/01

// This program demonstrates how to give a function access to a character 
// array by passing it a character pointer
// It then writes out the string using pointer arithmetic

#include <iostream.h>

void WriteString(const char *);  // function prototype

void main(void)
{
  char InputString[50] = "";

  cout << "Enter a string: ";
  cin.getline(InputString,50,'\n');

  cout << "\n";

  WriteString(InputString);

  cout << "\n";
}
//=============================================================================
void WriteString(const char *CharacterPointer)
{
  int Pause = 0;  // loop counter

  while (*CharacterPointer != '\0')  // while the value pointed to isn't NULL
  {
    cout << *CharacterPointer << flush;  // print current character

    CharacterPointer++;  // increment address

    for (Pause = 1; Pause < 20000000; Pause++);  // count to twenty million
  }
}


