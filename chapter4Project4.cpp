#include <iostream>
#include <cmath>
#include <string>

using namespace std; 

int main()
{

string writeNumber(int);
int counter;

counter = 99; 
while (counter>1)
{
    cout<< writeNumber(counter)<< " bottles of beer on the wall, \n";
    cout<< writeNumber(counter)<< " bottles of beer, \n";
    cout<< "Take one down, pass it around, \n";
    counter--;

}

cout<< writeNumber(counter)<< " bottle of beer on the wall, \n";
cout<< writeNumber(counter)<< " bottle of beer, \n";
cout<< "Take one down, pass it around, \n";
return 0;

}

string writeNumber(int number)
{
    int tens= number/10 ;
    int ones= number%10;

    string oWritten;
    string tWritten;

    if (tens==0 && ones ==0)
        return "zero";
    if (tens ==1  && ones==1)
        return "eleven";
    if (tens==1 &&  ones ==2)
        return "twelve";
    if (tens ==1 && ones == 3)
        return "thirteen";
    if (tens ==1 && ones==4)
        return "fourteen";
    if( tens==1 && ones==5)
        return "fifteen";
    if (tens==1 && ones ==6)
        return "sixteen";
    if (tens==1 && ones ==7)
        return "seventeen";
    if (tens==1 && ones==8)
        return "eighteen";
    if (tens==1 && ones==9)
        return "nineteen";

    switch(tens)
    {
        case 0:
            tWritten = "";
            break;

        case 2:
            tWritten="Twenty";
            break;

        case 3:
            tWritten= "Thirty";
            break;

        case 4: 
            tWritten= "Fourty";
            break;

        case 5: 
            tWritten= "Fifty";
            break;

        case 6: 
            tWritten= "Sixty";
            break;

        case 7:
            tWritten= "Seventy";
            break;

        case 8: 
            tWritten= "Eighty";
            break;

        case 9:
            tWritten= "Ninety";
            break;


    }

    if (tens !=0)
    {

        switch (ones)
        {

        case 0:
            oWritten = "";
            break;

        case 1:
            oWritten = "-one";
            break;

        case 2:
            oWritten = "-two";
            break;

        case 3:
            oWritten = "-three";
            break;

        case 4:
            oWritten = "-four";
            break;

        case 5:
            oWritten = "-five";
            break;

        case 6:
            oWritten = "-six";
            break;

        case 7:
            oWritten = "-seven";
            break;

        case 8:
            oWritten = "-eight";
            break;

        case 9:
            oWritten = "-nine";
            break;
        }
    }

    else
    {

        switch (ones)
        {

        case 1:
            oWritten = "One";
            break;

        case 2:
            oWritten = "Two";
            break;

        case 3:
            oWritten = "Three";
            break;

        case 4:
            oWritten = "Four";
            break;

        case 5:
            oWritten = "Five";
            break;

        case 6:
            oWritten = "Six";
            break;

        case 7:
            oWritten = "Seven";
            break;

        case 8:
            oWritten = "Eight";
            break;

        case 9:
            oWritten = "Nine";
            break;
            }
    }
        



    return tWritten + "" + oWritten;


}