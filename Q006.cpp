// Write a Program to Find Compound Interest.
#include <iostream>
#include <math.h>

int main()
{
    double amount, compound_interest, principal, rate, t;
    
    std::cout << "Principal = ";
    std::cin >> principal;
    std::cout << "Rate = ";
    std::cin >> rate;
    std::cout << "Time = ";
    std::cin >> t;
    
    amount = principal * pow((1 + rate / 100), t);
    compound_interest = amount - principal;
    
    std::cout << "Total amount is = " << amount << "\n";
    std::cout << "Compound Interest is = " << compound_interest;
    
    return 0;
}