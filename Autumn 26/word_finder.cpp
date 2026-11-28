#include<iostream>
#include<string>
#include<vector>
#include<fstream>

//each row is an index of the vector 'grid' 
//each column in the csame index of each string in the vector 'grid'


// Get row of grid as a string
void get_row(int r, const std::vector<std::string>& grid, std::string& out){
    int len = grid[0].size();
    for (int i=0; i<len; i++){
        out += (grid[r][i]);
    }
}

// Get column of grid as a stirng
void get_col(int c, const std::vector<std::string>& grid, std::string& out){
    int len = grid.size();      //num of rows must be num of strings
    for (int i=0; i<len; i++){
        out += (grid[i][c]);
    }
}

// Get Substring 
void get_substr(const std::string& s, const int& len, const int& init_index, std::string& substr){
    // s is a row/column ; len is the length of required substring; init_index is the the index at which the substring starts
    for(int i=0; i< len; i++){
        substr += (s[init_index +i]);
    }
}


//Search function
void search_seq(const std::string& s, std::vector<std::string> words, )
 // s is a row/column; 




void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){
 

}

// 
// EXAMPLE MAIN - REWRITE LATER

   int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 
    for(int i=0; i<solution.size();i++){
        std::cout<<solution[i]<<std::endl;
    }
/*
    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }
*/
} 
