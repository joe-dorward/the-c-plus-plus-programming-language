// Program: StringClass1.cpp
// Written By: Joe Dorward
// Date: 05/18/02

// This program demonstrates the creation, and use of a String Class

#include <iostream.h>

class MyString
{
private:  // member-data list
  char MyStringDataMember[256];

public:  // member-function list
  void StoreMyString(void);
  void PrintMyString(void);

};  // end class

void main(void)
{
  MyString UserPassword;  // create object


  cout << "Enter Password: ";
  UserPassword.StoreMyString();

  cout << "Entered Password: ";
  UserPassword.PrintMyString();

  cout << "\n\n";
}
// -----------------------------------------------------------------------
void MyString::StoreMyString(void)
{  // store entered string in class member-data

  cin >> MyStringDataMember;
}
// -----------------------------------------------------------------------
void MyString::PrintMyString(void)
{  // print string stored in class member-data

  cout << MyStringDataMember;
}
// -----------------------------------------------------------------------