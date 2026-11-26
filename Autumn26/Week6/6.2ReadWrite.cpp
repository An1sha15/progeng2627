#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    std::ofstream outfile;
    outfile.open("output.txt");
    infile.open("input.txt");

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    if(!outfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 

    }

    for(int i = v.size()-1; i >= 0; i = i-1){
        outfile<<v[i] <<std::endl;
        
    }

    infile.close(); 
    outfile.close();



}