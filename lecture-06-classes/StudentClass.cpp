// Program: StudentClass.cpp
// Written By: Joe Dorward
// Date: 05/19/02

// This program creates, and uses objects of the class student

#include <iostream.h>

class Student
{
private:  // begin data-components
  char FirstName[10];

public:  // begin function-components
  void GetFirstName(void);  
  void PrintFirstName(void);

};  // end class

void main(void)
{
  int StudentNumber = 0;

  Student Students[10];

  // do input
  for (StudentNumber = 0; StudentNumber < 3; StudentNumber++)
  {
    Students[StudentNumber].GetFirstName();
  }

  cout << "======================================\n";
  // do output
  for (StudentNumber = 0; StudentNumber < 3; StudentNumber++)
  {
    Students[StudentNumber].PrintFirstName();

    cout << "\n";
  }
}
// -----------------------------------------------------------------------
void Student::GetFirstName(void)
{  // this function asks for, and stores a student's first-name
  cout << "Enter the student\'s first name: ";
  cin >> FirstName;
}
// -----------------------------------------------------------------------
void Student::PrintFirstName(void)
{  // this prints a student's first-name
  cout << FirstName;
}
// -----------------------------------------------------------------------

