//Dvision by repetitive subtraction
#include <iostream>

int main(){
    int divisor;
    int n;
    int quotient;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    std::cout << "What you want to divide by: " << std::endl;
    std::cin >> divisor;
    while (n > divisor){
        n = n - divisor;
        quotient = quotient + 1;
    }
    std::cout<<"The whole number divison gives: "<<quotient<<std::endl;
}