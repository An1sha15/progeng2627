#include<iostream>
#include <vector>

int main(){
    int num, t, counter;
    std::vector<int>n;

    std::cout<<"Enter the number of numbers: "<<std::endl;
    std::cin>>num;
    for(int i=0; i<num;i++){
       std::cout<<"Enter a number: "<<std::endl;     
       std::cin>>n.at(i);
    }

    std::cout<<"Enter the number, t "<<std::endl;
    std::cin>>t;
    counter =0;
    for(int j=0; j<num;j++){
        if (n.at(j)<t){
            std::cout<<n[j]<<std::endl;
            
        }
    }

}