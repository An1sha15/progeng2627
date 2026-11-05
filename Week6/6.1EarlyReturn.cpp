#include <iostream>
#include <fstream>
#include <cstdlib>
// cstdlib header needed for EXIT_FAILURE

int main(){
    std::ifstream infile; 
    infile.open("inpt.txt"); //Ensuring the name is wrong so the file can't open

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    
    }

   
    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}
