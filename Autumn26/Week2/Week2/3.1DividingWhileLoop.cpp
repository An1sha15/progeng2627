#include <iostream>

int main(){
    int divisor;
    int n;
    int quotient;
    quotient = 0;
    std::cin >> n;
 
    std::cin >> divisor;
    while (n > divisor){
        quotient = quotient + 1;
    
        n = n - divisor;
       
    }
    std::cout<<"The whole number divison gives: "<<quotient<<std::endl;
}