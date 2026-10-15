//Factorials with for loops

#include <iostream>
int main(){
    int factorial = 1;
    int num;
    
    for(std::cin>>num; num > 1; num=num-1){
        factorial = factorial*num;
    }
    std::cout<<factorial<<std::endl;
}