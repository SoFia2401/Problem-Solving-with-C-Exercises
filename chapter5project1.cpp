#include <iostream>
#include <cmath>
#include <string>

using namespace std ;

/* Write a program that converts from 24-hour notation to 12-hour notation. 
For example it should convert 14:25 to 2:25PM. The input is given as two integers. 
There should be at least three functions, one for input, one to fo the conversion,
and one for the ourput. Record the AM/PM information as a value of type char, 'A' for AM and 'P'
for PM. Thus the function for doing the conversion will have a call-by-referencce formal 
parameter of type char to record whether it is AM or PM: (The function will have other
parameters as well.) Include a loop that lets the user repeat this computation for new 
input values again and again until the user says he or she wants to end the program.


*/

int main()
{
    char timeofDay = 'N';
    int hours;
    int minutes;
    int twelveminutes;
    int twelvehours;

    void takeInput(int&, int&);
    void doConversion(int, int, char&, int&, int&);
    void makeOutput(int, int, char);

    takeInput(hours,minutes);
    doConversion(hours, minutes,timeofDay, twelvehours, twelveminutes);
    
    makeOutput(twelvehours, twelveminutes, timeofDay);

}

void takeInput(int& hours, int& minutes)
{
    cout<< "Please insert the time you would like to convert \n";
    cin>> hours;
    cin >> minutes;

}

void doConversion(int hours, int minutes, char& timeofDay, int& twelvehours, int& twelveminutes)
{
    twelvehours= hours-12;
    twelveminutes= minutes;


    if (hours>12)
    {
        timeofDay='P';
    }

    else 
    {
        timeofDay = 'A';
    }

}

void makeOutput( int twelvehours, int twelveminutes, char timeOfDay)
{

    cout<< "The time is " << twelvehours << ":" << twelveminutes << timeOfDay;
}