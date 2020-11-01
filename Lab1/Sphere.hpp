//     TITLE:             Formatted Output
//     FILENAME:          Sphere.hpp
//     PREPARED FOR:      CS215 
//     PROGRAMMER:        Xavier Greer
//     DEVELOPMENT DATE:  October 6, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#ifndef Sphere_hpp
#define Sphere_hpp

#include <stdio.h>
#endif /* Sphere_hpp */

class Sphere{
public:
    Sphere(); // Class the creates a Sphere object.
    Sphere(int inRadius); // Creates a sphere object and takes in an initial int and sets it to the readius
    void SetRadius(int NewRadius); // Sets Radius for existing Sphere object
    int GetRadius(); // Gets the radius for existing sphere object
    float CalcCircumference(); // Calculates the circumferance of a Sphere object
    float CalcVolume(); // Calculates the volume of a Sphere object
    
private:
    int Radius;
};
