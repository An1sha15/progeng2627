#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


int main(){
    std::ifstream infile; 
    std::string name, line;
    std::cout<<"Enter file name"<<std::endl;
    std::cin>>name;
    infile.open(name);

    if(infile.is_open()){ 
        //std::string tmp;

        while(std::getline(infile, line)){ 
//printing the whole line instead. If I wanted each string, then it would be using tmp as before
            std::cout << line << std::endl;
        }

        infile.close(); 

    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}