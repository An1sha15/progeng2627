#include <iostream>
#include <vector>

int main(){
    int result;
    std::vector<int> v;
    v.push_back(3);
    v.push_back(15);
    v.push_back(4);

    result = v[0]*(v[1]+v[2]);
    std::cout<<result<<std::endl;
    

}