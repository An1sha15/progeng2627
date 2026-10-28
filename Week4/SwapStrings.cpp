#include <iostream>
#include <string>
#include <iostream>

// this is the only different line:
void myswap(std::string& a, std::string& b){

    std::string tmp;
    tmp = a;
    a = b;
    b = tmp;

}

int main(){
    std::string w1, w2;

    std::cout << "please enter two words: " << std::endl;
    std::cin >> w1 >> w2;

    std::cout << "you entered:" << std::endl;
    std::cout << "w1: " << w1 << std::endl;
    std::cout << "w2: " << w2 << std::endl;

    myswap(w1, w2);

    std::cout << "after swapping the words:" << std::endl;
    std::cout << "w1: " << w1 << std::endl;
    std::cout << "w2: " << w2 << std::endl;
}