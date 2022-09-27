#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int repeatCode; 

    do 

    {

    double priceHouse;
    double downpayment;
    double annualMortgageCost; 
    double loanBalanceInterest;
    double savings; 

    double calcAnnualAfterTaxCost(double, double);
    double calcAnnualMortgageCost(double, double);
    double calcTaxSavings(double);


    cout<< "Please insert the price of the House \n";
    cin >> priceHouse; 
    cout<< "Please insert the downpayment of the House \n";
    cin >> downpayment; 

    annualMortgageCost, loanBalanceInterest= calcAnnualMortgageCost(priceHouse, downpayment);
    savings = calcTaxSavings(loanBalanceInterest);

    cout<< "The annual cost of the house after tax is ";

    cout<< calcAnnualAfterTaxCost(annualMortgageCost, savings);

    cout<< "Would you like to make another calculation? Select 1 for yes or 0 to exit \n";
    cin >> repeatCode;

    }while(repeatCode == 1);

}

double calcAnnualMortgageCost(double priceHouse, double downpayment)
{
    double initialLoanBalance = priceHouse - downpayment;
    double loanBalanceInterest= initialLoanBalance * 0.06;
    double loanBalancePrincipal = initialLoanBalance * 0.03;
    double annualMortgageCost= loanBalanceInterest + loanBalancePrincipal;

    return annualMortgageCost, loanBalanceInterest;

}

double calcTaxSavings(double loanBalanceInterest)
{

    double savings = 0.35*loanBalanceInterest; 

    return savings; 
}

double calcAnnualAfterTaxCost(double annualMortgageCost, double savings)
{
    double annualAfterTaxCost = annualMortgageCost - savings; 
    return annualAfterTaxCost; 
}