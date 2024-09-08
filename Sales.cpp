#include <iostream>

int main(){
    int sales = 95000;
    double estateTax = 0.04 * sales;
    double countryTax = 0.02 * sales;
    double totalTax = estateTax + countryTax;

    std:: cout << "Total income made: " << sales << "\n";
    std:: cout << "Estate tax owed: " << estateTax;
    std:: cout << "Country tax owed: " << countryTax;
    std:: cout << "Total ammount of taxes owed: " << totalTax;

    return 0;
}