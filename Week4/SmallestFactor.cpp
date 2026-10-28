#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            return cf;
        }


    }
    return 0;
}

    

int main(){
    int num;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>> num;
    if( smallest_factor(num) != 0){
        std::cout<<"The number is not prime, the smallest factor is " << smallest_factor(num)<<std::endl;

    }
    else{
        std::cout<<"The number is prime"<<std::endl;
    }
    
}