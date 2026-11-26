#include <iostream>

double mypow(double base, int exp){
    double result, i; 
    result = base;

  

    for(i=1;i<(exp);i++){
        result = result*base;
    }
    if (exp>=0){
        return result;

    }
    else{
        return (1/result);

    }
}

int main(){


    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout<< "4^-1: " << mypow(4, -1) << std::endl;
}