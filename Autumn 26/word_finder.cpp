#include<iostream>
#include<string>
#include<vector>
#include<fstream>

//each row is an index of the vector 'grid' 
//each column in the csame index of each string in the vector 'grid'
// 

// Get row of grid
void get_row(int r, const std::vector<std::string>& grid, std::string& out){
    int len = grid[0].size();
    for (int i=0; i<len; i++){
        out.push_back(grid[r][i]);
    }
}

// Get column of grid
void get_col(int c, const std::vector<std::string>& grid, std::string& out){
    int len = grid.size();      //num of rows must be num of strings
    for (int i=0; i<len; i++){
        out.push_back(grid[i][c]);
    }
}

// Find words in the grid
// words not found  can be stored in a vector that compares everything in the found vector to original lsit of search words

//Check string for words
void check_string(const std::string& s, std::vector<std::string>&  out, const std::vector<std::string>& words){
    // s will be a row or a column of the grid
    for (int i =0; i<s.size(); i++){
        if (s[i] == words[i][0]){
//Checking if a word matches
// Use while to keep a counter (j) going of low long the letters of the row/col == the letter od the word
//If counter is equal to length of words[i] then word found!! :)
            int j = 0;
            while (j<words[i].size() && s[j] == words[i][j]){
                j++;
            }
                if (j==words[i].size()){
                    out.push_back(words[i]);
                }        
                else{
                out.push_back('#')
                }

        else{
            out.push_back('#')
        }
    }
    }
}
void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){
    for (int i=0; i<grid.size(); i++){
        std::string row;

        get_row(i, grid, row);
        check_string(row, solution, words);

    }

    for (int j=0; j<grid[i].size(); j++){
        std::string col;
        get_row(j, grid, col);
        check_string(col, solution, words);
    

    }

  




}
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

} 
