// Program: File.cpp
// Written by: Joe Dorward
// Date: 07/06/02

// This program copies the contents of the file: "input.txt" into the file: "output.txt"

#include <fstream.h> 
#include <string.h>

void main(void) 
{ 
  char LineOfText[256] = "";

  ifstream InputFile("input.txt");  // associate file-handle with input-stream
  ofstream OutputFile("output.txt");  // associate a file-handle with output-stream

  InputFile.getline(LineOfText,255);  // read line of text from input-file

  while ( !InputFile.eof() )  // loop while not at end-of-file
  {    
    OutputFile << LineOfText << "\n";  // output to file

    InputFile.getline(LineOfText,255);  // read line of text from input-file
  }
  InputFile.close();
}
