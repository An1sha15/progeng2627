#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    std::string outputfilename;

    std::cout << "enter name of input file" << std::endl;
    std::cin >> inputfilename;
    std::cout << "enter name of output file" << std::endl;
    std::cin >> outputfilename;


    std::ifstream infile; 
    std::ofstream outfile;
    infile.open(inputfilename);
    outfile.open(outputfilename);

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