#include <iostream>
#include  <string>
#include <cmath>

using namespace std;

/* write a function to check if one number is dividible by another. Your function 
should return a bool value which if true if a number is divisible by another, 
and false if there is a remainder left after the division.
*/

int main()
{

    int numerator;
    int denominator;
    bool isDivisible(int,int);

    cout<< "Please enter the numerator of your division \n";
    cin>> numerator;
    cout<< "Please enter the denominator of your division \n";
    cin>> denominator; 
    if (isDivisible(numerator, denominator))
    cout<< "These numbers are divisible \n";
    else 
    cout<< "These numbers are not divisible \n";

}

bool isDivisible(int numerator, int denominator)
{
    int quotient = numerator/denominator;
    int remainder = numerator % denominator;

    if (remainder != 0)
    return false ;
    else 
    return true;

}
