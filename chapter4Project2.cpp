#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

const double PI = 3.14;
double boxHeight, boxWidth, boxLength; 
double sphereRadius; 
double cylinderRadius, cylinderHeight; 
int mode;
string volumeType; 

double calcVolume(double, double, double, double); 
double calcVolume(double, double);
double calcVolume(double, double, double);

cout<< "What volume would you like to calculate? \n";
cin>> volumeType;

if (volumeType == "box")
{
    mode=1;
}

if (volumeType == "sphere")
{
    mode=2;
}

if (volumeType == "cylinder")
{
    mode=3;
}


switch(mode)
{
    case 1: 
    cout<< "Please insert the height of the box\n";
    cin>> boxHeight; 
    cout<< "Please insert the width of the box \n";
    cin>> boxWidth;
    cout<< "Please insert the lenght of the box \n";
    cin>> boxLength; 

    cout<< "The volume is ";
    cout<< calcVolume(boxHeight, boxWidth, boxLength, PI);
    return 0;

    case 2: 
    cout<< "Please insert the radius of the sphere \n";
    cin>> sphereRadius; 
    cout<< "The volume of the sphere is ";
    cout<< calcVolume(sphereRadius, PI);
    return 0;

    case 3: 
    cout<< "Please insert the radius of the cylinder \n";
    cin>> cylinderRadius;
    cout<< "Please insert the height of the cylinfer \n";
    cin>> cylinderHeight; 
    cout<< "The volume of the cylinder is ";
    cout<< calcVolume(cylinderRadius, cylinderHeight, PI); 
    return 0;



}



}

double calcVolume(double boxHeight, double boxWidth, double boxLength, double PI)
{
    double volumeBox= boxHeight*boxWidth*boxLength;
    return volumeBox;

}

double calcVolume(double sphereRadius, double PI)
{
    double volumeSphere = (4/3)*PI*pow(sphereRadius,3);
    return volumeSphere;
}

double calcVolume(double cylinderRadius, double cylinderHeight, double PI)
{
    double volumeCylinder= PI*pow(cylinderRadius,2)*cylinderHeight; 
    return volumeCylinder;

}