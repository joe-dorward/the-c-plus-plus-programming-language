// Program: ArithmeticClass.cpp
// Written By: Joe Dorward
// Date: 05/17/02

// This program creates, and uses objects of the class Arithmetic

#include <iostream.h>

class MyArithmeticClass
{
private:  // begin data-components list
  int TheAnswer;

public:  // begin prototype function-components list
  void AddTwoIntegers(int, int);
  void PrintTheAnswer(void);

};  // end of class

void main(void)
{
  int IntegerOne = 0,
      IntegerTwo = 0;

  MyArithmeticClass FirstArithmeticObject;  // create an Object

  // get input
  cout << "Enter the first integer: ";
  cin >> IntegerOne;

  cout << "Enter the second integer: ";
  cin >> IntegerTwo;

  // do addition
  FirstArithmeticObject.AddTwoIntegers(IntegerOne,IntegerTwo);  // interact with object

  // do addition output
  cout << "\n"
       << IntegerOne
       << " + "
       << IntegerTwo
       << " = ";

  FirstArithmeticObject.PrintTheAnswer();  // interact with object

  cout << "\n";
}
// -----------------------------------------------------------------------
void MyArithmeticClass::AddTwoIntegers(int FirstInteger, int SecondInteger)
{  // add the parameters, and store the result in the object's data-component

  TheAnswer = FirstInteger + SecondInteger;
}
// -----------------------------------------------------------------------
void MyArithmeticClass::PrintTheAnswer(void)
{  // print the value of the object's data-component

  cout << TheAnswer;
}
// -----------------------------------------------------------------------
