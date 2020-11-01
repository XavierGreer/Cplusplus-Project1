//     TITLE:             Formatted Output
//     FILENAME:          Functions.cpp
//     PREPARED FOR:      CS215 
//     PROGRAMMER:        Xavier Greer
//     DEVELOPMENT DATE:  October 6, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#include "Functions.hpp"
#include <iostream>

void DisplayTitle(const int & LineLength){
    cout.setf(ios::right, ios:: floatfield);
    cout.fill('+');
    cout << stringPadplus("RADIUS");
    cout.width(LineLength/4);
    cout << stringPadplus("RADIUS") ;
    cout.width(LineLength/4);
    cout << stringPadplus("CIRCUMFERENCE") ;
    cout.width(LineLength/4);
    cout << stringPadplus("VOLUME") << endl;
    cout.fill(' ');
    cout << stringPadspace("DECIMAL");
    cout.width(LineLength/4);
    cout << stringPadspace("BINARY") ;
    cout.width(LineLength/4);
    cout << stringPadspace("HEXIDECIMAL") ;
    cout.width(LineLength/4);
    cout << stringPadspace("SCIENTIFIC") << endl;
    cout.width (LineLength-7);
    cout.fill('=');
    cout << "=" << endl;
};

string stringPadplus(string Title){
    while (Title.size() < 13)
        Title.append("+");
    return Title;
}

string stringPadspace(string Title){
    while (Title.size() < 13)
        Title.append(" ");
        return Title;
}

void CenterLine(const string & Text, unsigned int LineLength){
    cout.setf(ios::internal, ios:: floatfield);
    cout.width(LineLength/2 + (Text.size()/2));
    cout << Text << endl;
};

void PrintBinary(int InNum){
    cout << bitset <8> (InNum);
};

void PrintHex(int InNum){
    cout.setf(ios::showbase);
    cout << hex << InNum << dec;
    cout.unsetf (ios::showbase );
};

void PrintScientific(float InNum){
    cout.precision(2);
    cout << scientific << InNum;
};

void PrintDecimal(int InNum){
    cout << InNum;
};
