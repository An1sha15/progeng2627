//Multiplication table
#include <iostream>

int main(){
    int n;
    std::cin>>n;
    for (int c1=1;c1<=n; c1++){
        for(int c2=1;c2<=n;c2++){
            std::cout<<c1*c2;
            std::cout<<"\t";
        }
        std::cout<<std::endl;
    }



}