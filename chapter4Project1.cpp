#include <iostream>
#include <cmath>

using namespace std;

/* Program that computes the annual after-tax cost of a new house for the first year of ownership
Cost computed from the annual mortgage cost minus the tax savings. The annual mortgagec cost is estimated
as 3 percent of the initial loan balance credited toward paying oof the loan principal plus 6 percent 
of the initial loan balance in interest. The initial loan balance is the price minus the down payment. 
Assume a 35 percent marginal tax rate and assume that interest payments are tax deductible. So, the 
the traz savings is 35 percent of the interst payment. Your program shoudl use at leaaast two function 
 definitions and should allow the user to repeat this calulataion as often as the user wishes.
*/

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