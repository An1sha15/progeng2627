#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        
    }

    infile.close(); 
//print vector in reverse order
    for(int i = (v.size() -1); i >= 0 ; i = i -1){
        std::cout<<v[i]<<std::endl;
        
    }

}