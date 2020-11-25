#include <iostream>
#include <cmath>

// let's do a loan calculator for small business
// !!! data typed must be correctly declared otherwise math won't be right.

int main()
{
    float loanAmount;
    float totalAmount;
    float interestRate=0.015;

    
    std::cout << "Enter the amount for your Loan: "<< std::endl;
    std::cin >> loanAmount;
    

    for (int day = 1; day <= 15 ; day++)
    {
        
        totalAmount = loanAmount * pow(1+interestRate, day);
        std::cout << day << "------" << totalAmount << std::endl;

    }
    return 0;

}