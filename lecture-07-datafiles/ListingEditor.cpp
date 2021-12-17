// Program: ListingEditor.cpp
// Written by: Joe Dorward
// Date: 07/04/02

// This program edits the listing file created by the DOS DIR command

#include <iostream.h>
#include <fstream.h>

int main(void)
{
  char line[50];

  istream InputFile("listing.txt",ios::in);



  cin.getline(line,50,'\n');

  return(0);
}