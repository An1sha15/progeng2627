//Fruit Sets
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 



int search_vector(std::string s, const std::vector<std::string>& vin){
    for (int i =0; i<vin.size();i++){
        if (vin[i]==s){
            return i;
        }
    }
    return -1;
}
void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i=0; i<vin1.size();i++){
        if (search_vector(vin1[i], vout)==-1){
            vout.push_back(vin1[i]);
        }
    }
        for (int j=0; j<vin2.size();j++){
        if (search_vector(vin2[j], vout)==-1){
            vout.push_back(vin2[j]);
        }
    }
}



void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i =0; i<vin1.size();i++){
        for (int j =0; j<vin2.size();j++){
            if (vin1[i]==vin2[j]){
                vout.push_back(vin2[j]);
            }
        }
    }
    

}


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

    intersection_vector(vin1, vin2, vout);
    for (int k = 0; k<vout.size(); k++){

        outfile << vout[k] <<std::endl;

    }


    outfile.close();
    vout.clear();

    outfile.open("union");
    union_vector(vin1, vin2, vout);
    for (int l=0; l<vout.size();l++){
        outfile<<vout[l]<<std::endl;
    }


}