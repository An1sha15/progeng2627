#include <iostream>
#include <vector>

double  min_vector_element(const std::vector<double>& vin){



    double min = vin[0];

    for(int i=0; i<vin.size();i++){
        if(vin[i]<min){
            min = vin[i];
        }

    }
    return min;
}


int main(){
    std::vector<double>v;

    v.push_back(4);
    v.push_back(6);
    v.push_back(1);
    v.push_back(3); 

    std::cout<<"THe min value is: "<<min_vector_element(v)<<std::endl;
}








