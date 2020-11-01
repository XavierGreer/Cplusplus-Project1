//     TITLE:             Formatted Output
//     FILENAME:          Sphere.cpp
//     PREPARED FOR:      CS215 
//     PROGRAMMER:        Xavier Greer
//     DEVELOPMENT DATE:  October 6, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#include "Sphere.hpp"
#include <iostream>
using namespace std;



const double PI = 3.14159265;


Sphere::Sphere(){
    Radius = 0;
}

Sphere::Sphere(int inRadius){
    // Ensures that user has entered a radius that is 0<=
    if (inRadius < 0){
        cout << "That number is less then zero! \n";
        cout << "Initializing Radius to zero\n";
        Radius = 0;
    }
    else
        Radius =  inRadius;
}

void Sphere::SetRadius(int NewRadius){
    // Ensures that user has entered a radius that is 0<=
    if (NewRadius < 0){
        cout << "That number is less then zero! \n";
        cout << "Not changing current Radius value\n";
    }
    else
        Radius = NewRadius;
}

int Sphere::GetRadius(){
    return Radius;
}

float Sphere::CalcCircumference(){
    return  2 * PI * Radius;
}

float Sphere::CalcVolume(){
    return (4.0/3.0) * PI * (Radius*Radius*Radius);
}
