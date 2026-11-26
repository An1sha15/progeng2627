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


double sumPow(double in1, double in2){

    double sum, i; 
    sum  = 0;

    for(i=1; i<(in1+1); i++){
        sum = sum + mypow(in2, i);
        
    }
    return sum;
}


int main(){
    double n, x;
    std::cout << "please enter a base" << std::endl;
    std::cin >> x;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "sum of powers is: " << sumPow(n,x) << std::endl;
}
