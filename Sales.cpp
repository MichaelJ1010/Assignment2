#include <iostream>

int main(){
    int sales = 95000;
    double estateTax = 0.04;
    double countryTax = 0.02;
    double totalTax = estateTax + countryTax;

    std:: cout << "Total income made: " << sales << "\n";
    std:: cout << "Estate tax owed: " << sales * estateTax;
    std:: cout << "Country tax owed: " << sales * countryTax;

    return 0;
}