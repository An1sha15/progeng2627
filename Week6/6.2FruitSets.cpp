//Fruit Sets
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

/*void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

}

int search_vector(std::string s, const std::vector<std::string>& vin){

}*/


int main(){
    std::ifstream infile1; 
    std::ifstream infile2;
    std::ofstream outfile;
    outfile.open("intersection");


    infile1.open("warehouse1.txt");
    infile2.open("warehouse2.txt");
    std::vector<std::string> vin1;
    std::vector<std::string> vin2;
    std::vector<std::string> vout;

    if(!infile1.is_open()){ 
        std::cout << "error opening file1" << std::endl;
        return EXIT_FAILURE;
    }
    if(!infile2.is_open()){ 
        std::cout << "error opening file2" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile1 >> tmp){
        vin1.push_back(tmp); 

    }
    while(infile2 >> tmp){
        vin2.push_back(tmp); 

    }

    for (int i =0; i<vin1.size();i++){
        for (int j =0; j<vin2.size();j++){
            if (vin1[i]==vin2[j]){
                vout.push_back(vin2[j]);
            }
        }
    }
    for (int k = 0; k<vout.size(); k++){

        outfile << vout[k] <<std::endl;

    }


    outfile.close();

    outfile.open("union");
    for (int i =0; i<vin1.size();i++){
        outfile <<vin1[i] <<std::endl;




}