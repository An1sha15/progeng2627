//Sum so far
#include <iostream>

int main(){
    int i = 2;
    int sum = 0;
    int n;
    while (i != 0){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> n;
        sum = sum + n;
        std::cout << "Sum so far is  " << sum << std::endl;
    }
    
}