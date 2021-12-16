// Program: Age.cpp
// Written by: Joe Dorward
// Date: 05/24/00

// This program demonstrates the basic use of the if - else statement.  
// It asks the user to enter a customer's age

#include <iostream.h>

void main(void)
{
int CustomerAge = 0;

  cout << "Enter the customer's age: ";
  cin >> CustomerAge;

  if (CustomerAge < 21)   // Customer younger than 21 years
  {
    cout << "\n Not OK - "
         << "\n The customer is too young to buy alcohol. \n";
  }
  else
  {
    cout << "\n OK - "
         << "\n The customer may buy alchohol. \n";
  }
}
