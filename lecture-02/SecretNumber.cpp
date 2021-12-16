// Program: SecretNumber.cpp
// Written by: Joe Dorward
// Date: 05/16/00

//  This simulates an ATM asking the user for their secret number

#include <iostream.h>

void main(void)
{
  const int SecretNumber = 1234;

  int EnteredNumber = 0;


  cout << "\n ** PIN REQUIRED TO ACCESS THIS MACHINE ** \n";

  cout << "\n Enter your secret number: ";
  cin >> EnteredNumber;

  if (EnteredNumber == SecretNumber)
  {
    cout << "\n Welcome to the Wells Fargo ATM server."
         << "\n You may transfer other people's money "
         << "into your own account. \n\n";
  }
  else
  {
    cout << "\n ** ACCESS DENIED **"
         << "\n I know who you are, and I'm calling the cops now. \n\n";
  }
}
