#include <iostream>

int main() {
    double pounds, exRate, euros;
    std::cout<<"Enter amount of money: " << std::endl;
    std:: cin>>pounds;

    std::cout<<"Enter the exchange rate from pounds to euros: "<< std::endl;
    std:: cin>>exRate;

    euros = pounds*exRate;

    std::cout<<"£"<< pounds<<" = €" <<euros<< std::endl;
    
}
