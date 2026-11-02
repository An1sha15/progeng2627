#include <iostream>
#include <vector>


double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    int num,n;
    std::vector<double> v;
    std::cout<< "How many numbers do you want to store?"<<std::endl;
    std::cin>>num;
    for(int i= 0; i<num;i++){
        std::cout<<"Enter a number: "<<std::endl;
        std::cin>>n;
        v.push_back(n);


    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}

// Tested the prgram to give: 2.5
