#include<iostream>
#include<string>
#include<vector>
#include<fstream>

//each row is an index of the vector 'grid' 
//each column in the csame index of each string in the vector 'grid'

void get_row(int r, const std::vector<std::string>& grid, std::string& out){
    int len = grid[0].size();
    for (int i=0; i<len; i++){
        out.push_back(grid[r][i]);
    }
}

void get_col(int c, const std::vector<std::string>& grid, std::string& out){
    int len = grid.size();      //num of rows must be num of strings
    for (int i=0; i<len; i++){
        out.push_back(grid[i][c]);
    }
}

void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){

}


    
