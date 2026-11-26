#include<iostream>
#include <vector>

int main(){
    int num, t, counter, x;
    std::vector<int>n;
    std::vector<int>index;    

    std::cout<<"Enter the number of numbers: "<<std::endl;
    std::cin>>num;
    for(int i=0; i<num;i++){
       std::cout<<"Enter a number: "<<std::endl;     
       std::cin>> x;
       n.push_back(x);

    }

    std::cout<<"Enter the number, t "<<std::endl;
    std::cin>>t;
    counter =0;
    for(int j=0; j<num;j++){
        if (n[j]==t){
            counter = counter +1;
            index.push_back(j);
        }
    }
    std::cout<<"There are " << counter<< " occurrences at indices: "<<std::endl; 
    for(int k = 0; k<counter; k++){
        std::cout<<index[k]<<std::endl;
    }

}