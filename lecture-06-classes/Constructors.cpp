// Program: Constructors.cpp
// Written By: Joe Dorward
// Date: 06/09/02

// This program demonstrates using a Constructor & Destructor with a
// simple Book Class

#include <iostream.h>
#include <iomanip.h>
#include <string.h>

class Book
{
private:  // begin data-components
  char Title[25];
  int NumberOfPages;
  float Price;

public:  // begin function-components
  Book(){strcpy(Title,"none"), NumberOfPages = 0, Price = 0.0;};  // constructor
  ~Book(){};  // destructor

  void PrintBookDetails(void);

};  // end class

void main(void)
{
  Book FirstBookObject;  // create an Object

  FirstBookObject.PrintBookDetails();
}
// -----------------------------------------------------------------------
void Book::PrintBookDetails(void)
{  // this function prints the Object's data-components

  cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2)
       << "The book: \""
       << Title
       << "\", has: "
       << NumberOfPages
       << " pages, and is priced at: $"
       << Price
       << ".\n";
}
// -----------------------------------------------------------------------

