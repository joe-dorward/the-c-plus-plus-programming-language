// Program: ArithmeticFunctions.cpp
// Written by: Joe Dorward
// Date: 04/20/00

// This program demonstrates writing, and calling a function that adds two
// integers together

#include <iostream.h>

// declare the functions
int AddTwoIntegers(int,int);

void main(void)
{
  int IntegerOne = 0,
      IntegerTwo = 0;

  // ask for a number
  cout << "Enter an integer: ";
  cin >> IntegerOne;
  
  // ask for another number
  cout << "Enter an integer: ";
  cin >> IntegerTwo;

  // print answer
  cout << "\n"
       << "Adding "
       << IntegerOne
       << " and "
       << SecondInteger
       << " is "
       << AddTwoIntegers(IntegerOne,IntegerTwo);

}
// ======================================================================
int AddTwoIntegers(int FirstInteger, int SecondInteger)   // function definition
{
	return(FirstInteger + SecondInteger);
}
// ======================================================================
