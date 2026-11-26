//Nested Loops
#include <iostream>

int main(){
    int n;
    int c1, c2;
    c1 =0;
    c2 =0;
    std::cin>>n;
    while (c2<n){
        while (c1<n){
            std::cout<<"*";
            c1=c1+1;
          
        }
        std::cout<<std::endl;
        c2 = c2+1;
        c1=0;
        
    }
}