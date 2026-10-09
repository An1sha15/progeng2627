#include <iostream>

int main() {
    double celsius, fahrenheit;
    std::cout<<"Enter temperature in Celsius: " << std::endl;
    std:: cin>>celsius;

    fahrenheit = (celsius*9/5)+32;

    

    std::cout<<"The temperature in Fahrenheit is " << fahrenheit << std::endl;
    
}