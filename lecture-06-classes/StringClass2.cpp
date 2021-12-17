// Program: StringClass2.cpp
// Written By: Joe Dorward
// Date: 05/18/02

// This program demonstrates the creation, and use of a String Class

#include <iostream.h>

class TypeString
{
private:  // begin data-components list
  char StringDataMember[256];

public:  // begin function-components list
  void StoreString(void);
  void PrintString(void);

  // do my versions of the string functions
  unsigned int ShowStringLength(void);  // strlen()

};  // end class

void main(void)
{
  TypeString MyStringObject;  // create an object


  // do input and test
  cout << "Enter a string of characters: ";
  MyStringObject.StoreString();

  MyStringObject.PrintString();

  // do string length
  cout << "\n"
       << "The length of the data-component is: "
       << MyStringObject.ShowStringLength()
       << "\n";

  cout << "\n\n";
}
// -----------------------------------------------------------------------
void TypeString::StoreString(void)
{  // store entered string in class data-component

  cin.getline(StringDataMember,256,'\n');
}
// -----------------------------------------------------------------------
void TypeString::PrintString(void)
{  // print stored class data-component string

  cout << "The data-component contains: "
       << StringDataMember
       << "\n";
}
// -----------------------------------------------------------------------
unsigned int TypeString::ShowStringLength(void)
{  // return length class data-component string
  
  unsigned int ElementNumber = 0;

  while (StringDataMember[ElementNumber] != '\0')
  {
    ElementNumber++;
  }
  return(ElementNumber);
}
// -----------------------------------------------------------------------
