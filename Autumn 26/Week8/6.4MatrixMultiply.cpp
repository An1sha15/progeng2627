#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// useful for manipulation of strings
#include <sstream>

// to set precision when printing
#include <iomanip>


// CONVERTING A ROW TO A VECTOR FUNCTION
std::vector<double> row_to_vector(std::string s){

    std::stringstream ss;
    std::string tmp;
    std::vector<double> out;

    // we can use a stringstream as if it were a stream object 
    // such as std::cout or something of type
    // std::ifstream or std::ofstream

    ss << s;
    while(ss >> tmp){
        // std::stod converts from string to double
        out.push_back(std::stod(tmp));
    }
    return out;
}


// CONVERTING A COLUMN TO A VECTOR FUNCTION
std::vector<double>column_extract(std::vector<std::vector<double>> m, int col_index){
    std::vector<double> out;

    for(int i=0; i<m.size(); i++){
        out.push_back(m[i][col_index]);
    }
    return out;
}


// READING MATRIX FROM FILE FUNCTION
std::vector<std::vector<double>> read_matrix_from_file(std::string input_file){

    std::ifstream infile;
    infile.open(input_file);
    if(!infile.is_open()){
        std::cout << "error opening file " << input_file << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::vector<double>> out;

    // std::getline reads a whole line as a string
    // by default the separator is the newline
    // rather than any whitespace
    while(std::getline(infile, line)){
        out.push_back(row_to_vector(line));
    }

    return out;
}

/*// SUM OF MATRICES FUNCTION
std::vector<std::vector<double>> 
matrix_sum
(
    const std::vector<std::vector<double>>& m1,
    const std::vector<std::vector<double>>& m2)
{ 

    std::vector<std::vector<double>> out;

    for(int i = 0; i < m1.size(); i++){

        std::vector<double> row;
        for(int j = 0; j < m1[0].size(); j++){

            // bidimensional indexing
            row.push_back(m1[i][j] + m2[i][j]);
        }
        out.push_back(row);

    }

    return out;

}*/

// SCALAR PRODUCT OF MATRICES FUNCTION
std::vector<std::vector<double>> scalar_product(const std::vector<std::vector<double>>& m1,
    const std::vector<std::vector<double>>& m2)
{
    std::vector<std::vector<double>> product;
    std::vector<double> product_row;
    double sum = 0.0;
// general idea : mutliply each row of m1 by column of m2.
//Get column using column function and row from row func. Add them as store in sum, 
//and then put that sum as the element of the matrix

    for(int i =0; i<m1.size(); i++){
        std::vector<double> row = m1[i];
        std::vector<double> row2 = m2[i];
        for(int j=0; j<m2[0].size(); j++){
            
            std::vector<double> col = column_extract(m2, j);
            for(int k=0; k<row.size(); k++){
                sum = sum + (row[k]*col[k]);
            }
        product_row.push_back(sum);
        sum = 0.0;
        
        }
        product.push_back(product_row);
        
        product_row.clear();
        
    }
    return product;
    
}

//CONVERT MATRIX BACK TO STRING
std::string matrix_to_string(std::vector<std::vector<double>> m){

    std::stringstream out;
    // to set precision when printing
    out << std::fixed << std::setprecision(2);

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[0].size(); j++){
            out << (m[i][j]) << "\t";
        }
        out << "\n";
    }

    // getting the std::string representation 
    // of this std::stringstream object
    return out.str();
}


//PRINT OVERALL CALCULATION 
int main(int argc, char* argv[]){

    if(argc != 3){
        std::cout << "two arguments needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::vector<double>> m1 = read_matrix_from_file(argv[1]);
    std::vector<std::vector<double>> m2 = read_matrix_from_file(argv[2]);

    std::vector<std::vector<double>> m3 = scalar_product(m1, m2);

    std::cout << matrix_to_string(m1) << std::endl;
    std::cout << "*" << std::endl << std::endl;
    std::cout << matrix_to_string(m2) << std::endl;
    std::cout << "=" << std::endl << std::endl;
    std::cout << matrix_to_string(m3) << std::endl;

}