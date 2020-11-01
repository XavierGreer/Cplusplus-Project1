//     TITLE:             Formatted Output
//     FILENAME:          main.cpp
//     PREPARED FOR:      CS215 
//     PROGRAMMER:        Xavier Greer
//     DEVELOPMENT DATE:  October 6, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#include "Sphere.hpp"
#include "Functions.hpp"
#include <iostream>

int main(int argc, const char * argv[]){
   // This is overall laength used to create the columns. Each column is about a quarter of this size.
   const int LineLength = 80;
    
    // Displayed Heading
    CenterLine( "Data on Spheres CS215 Sec<> Lab 2" , LineLength);
    CenterLine( "By" , LineLength);
    CenterLine( "Xavier Greer" , LineLength);
    DisplayTitle(LineLength);
    
    // Initializing the Sphere class and setting the starting readius
    Sphere Sphere;
    int startingRadius = 20;
    
    // This is a for loop that begins with the starting radius and
    // increments by one 10 times then displays on a new row/line
    // the next radius. Additional information on the sphere is
    // presented in the consecutive columns. The columns disply
    // the following:
    // Column 1: Radius in decimal form
    // Column 2: Radius in binary form
    // Column 3: Circumference in Hexidecimal form
    // Column 4: Volume in Scientific notation
    
    for(int i = startingRadius; i < 11 + startingRadius; i++){
        Sphere.SetRadius(i);
        // Setting the flag to fill empty space with "."
        cout.setf(ios::right, ios:: floatfield);
        cout.fill('.');
        PrintDecimal(Sphere.GetRadius());
        // Setting the location for the second column
        cout.width(LineLength/4+6);
        PrintBinary(Sphere.GetRadius());
        // Setting the location for the third column
        cout.width(LineLength/4);
        PrintHex(Sphere.CalcCircumference()) ;
        // Setting the location for the fourth column
        cout.width(LineLength/4+5);
        PrintScientific(Sphere.CalcVolume());
        cout << endl;
    }
    return 0;
}
//Data on Spheres CS215 Sec<> Lab 2
//By
//Xavier Greer
//RADIUS++++++++++++++RADIUS++++++++++++++CIRCUMFERENCE+++++++VOLUME+++++++
//DECIMAL             BINARY              HEXIDECIMAL         SCIENTIFIC
//=========================================================================
//20..................00010100................0x7d.................3.35e+04
//21..................00010101................0x83.................3.88e+04
//22..................00010110................0x8a.................4.46e+04
//23..................00010111................0x90.................5.10e+04
//24..................00011000................0x96.................5.79e+04
//25..................00011001................0x9d.................6.54e+04
//26..................00011010................0xa3.................7.36e+04
//27..................00011011................0xa9.................8.24e+04
//28..................00011100................0xaf.................9.20e+04
//29..................00011101................0xb6.................1.02e+05
//30..................00011110................0xbc.................1.13e+05
//Program ended with exit code: 0
