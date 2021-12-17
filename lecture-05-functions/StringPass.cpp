// Program: StringPass.cpp
// Written by: Joe Dorward
// Date: 04/03/01

// This program demonstrates how to pass a string to a function

#include <iostream.h>

void PrintGreeting(char *);  // function prototype

void main(void)
{
  char UserName[30] = "";

  cout << "Enter your username: ";
  cin.getline(UserName,30,'\n');

  PrintGreeting(UserName);
}
//=====================================
void PrintGreeting(char *InputString)
{
  cout << "\n"
       << "Welcome to the system: "
       << InputString
       << "\n";
}