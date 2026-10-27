#include <iostream>

int myfactorial(int in){

    int fact;
    fact = 1;



    for (; in>1; in=in-1){
        fact = fact*in;

    }


    return fact;

}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}
