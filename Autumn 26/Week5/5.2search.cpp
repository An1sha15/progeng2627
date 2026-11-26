#include<iostream>
#include <vector>



int search_vector(int n, const std::vector<int>& vin){
    int index =-1;
    for(int i=0; i<vin.size();i++){
        if(vin[i]==n){
            index = i;
        }
    }
    return index;
}


int main(){
    int num = 4;
    std::vector<int> v{3,4,5,6,7,8};

    std::cout<<"the number is at index: "<< search_vector(num, v)<<std::endl;



}