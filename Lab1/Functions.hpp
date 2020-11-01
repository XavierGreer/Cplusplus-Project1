//     TITLE:             Formatted Output
//     FILENAME:          Functions.hpp
//     PREPARED FOR:      CS215 
//     PROGRAMMER:        Xavier Greer
//     DEVELOPMENT DATE:  October 6, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#ifndef Functions_hpp
#define Functions_hpp

#include <stdio.h>
#include <string>
#include <bitset>

using namespace std;

void DisplayTitle(const int & LineLength); // Displays the purpose of each Column above corresponding column. 
void CenterLine(const string & Text, unsigned int LineLength); // Centers text
string stringPadplus(string Title); // Formats string to add "+" at the end
string stringPadspace(string Title); // Formats string to add " " at the end
void PrintDecimal(int InNum); // Received int will be printed in decimal form
void PrintBinary(int InNum); // Received int will be printed in Binary form
void PrintHex(int InNum); // Received int will be printed in Hexidecimal form
void PrintScientific(float InNum); // Received int will be printed in Scientific form

#endif /* Functions_hpp */
