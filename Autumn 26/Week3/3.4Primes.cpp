// Prime numbers

// We don't have to check unitl n-1
// because there must be factor (except) below the square root of the number
// otherwise, it will be prime
// this is because for all factors that are not the square root, one must be smaller than and its corresponding pair must be larger than the sqaure root. 
// E.g. 36 = 6*6 = 3*12 = 4*9 (3<6<12 and 4<6<9)

//we can also end the loop if a single factor is found, but since it is changed to true, it will exit the loop whena. factor is found.
#include <iostream>

int main(){
    int n;
    bool found_factor = false;
    // initially we haven't found any factors...

    std::cout << "please enter an integer greater than 1" << std::endl;
    // we assume that the user enters an integer greater than 1
    std::cin >> n;


    // cf like candidate factor
    // (begins at 2, smallest candidate factor)

    for(int cf = 2; cf < std::sqrt(n); cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            found_factor = true;
            //...it means we have found a factor!
        }

    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}

