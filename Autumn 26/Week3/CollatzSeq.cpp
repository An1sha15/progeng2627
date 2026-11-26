//Collatz sequence
#include <iostream>

int main(){
    int n, numSteps, max;
    numSteps = 0;
    
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>n;
    max = n;
    while (n != 1){
        if (n%2 == 0){
            n = n/2;
            std::cout<<n<<std::endl;


        }
        else{
            n = (3*n)+1;
            std::cout<<n<<std::endl;
        }
        if (n>max){
            max = n;
        }
        numSteps = numSteps + 1;
    }
    std::cout<<"Number of steps: "<<numSteps<<std::endl;
    std::cout<<"Maximum value in the sequence:  "<<max<<std::endl;
}