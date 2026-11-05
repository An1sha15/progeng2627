#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


int main(){
    std::ifstream infile; 
    std::string name;
    std::cout<<"Enter file name"<<std::endl;
    std::cin>>name;
    std::vector<std::string> v;
    infile.open(name);

    if(infile.is_open()){ 
        std::string tmp;

        while(infile>>tmp){ 
            v.push_back(tmp);
        }

        infile.close(); 

    }
    else{
        std::cout << "error opening file" << std::endl;
    }
    for(int i = (v.size() -1); i >= 0 ; i = i -1){
        std::cout<<v[i]<<std::endl;
        
    }


}

/*  Print the whole line in reverse because why not :)
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


int main(){
    std::ifstream infile; 
    std::string name, line;
    std::cout<<"Enter file name"<<std::endl;
    std::cin>>name;
    std::vector<std::string> v;
    infile.open(name);

    if(infile.is_open()){ 
        //std::string tmp;

        while(std::getline(infile, line)){ 

            v.push_back(line);
        }

        infile.close(); 

    }
    else{
        std::cout << "error opening file" << std::endl;
    }

    for(int i = (v.size() -1); i >= 0 ; i = i -1){
        std::cout<<v[i]<<std::endl;
        
    }
}
    */