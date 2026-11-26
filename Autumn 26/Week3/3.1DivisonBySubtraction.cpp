//Dvision by repetitive subtraction
#include <iostream>

int main(){
    int divisor;
    int n;
    int quotient;
    quotient = 0
    std::cin >> n;
    std::cout << n << std::endl;
    
    std::cin >> divisor;
    std::cout << divisor << std::endl;
    while (n > divisor){3
        quotient = quotient + 1;
        std::cout << quotient << std::endl;

        n = n - divisor;
        std::cout << n << std::endl;
    }
    std::cout<<"The whole number divison gives: "<<quotient<<std::endl;
}