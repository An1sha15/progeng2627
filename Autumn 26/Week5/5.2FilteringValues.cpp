#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for (int i =0; i<vin.size(); i++){
        if(vin[i]<t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> v1 {0,1,5,4,2,7,8,3};
    std::vector<double> v2;
    int t = 6;

    filter_v(v1,t, v2);
    std::cout<<"Printing vector: "<<std::endl;

    for(int j= 0; j<v2.size(); j++){
        std::cout<<v2[j]<<std::endl;
        
    }



}

