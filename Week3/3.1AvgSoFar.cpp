// average so far

#include <iostream>

int main() {
    double number, counter, total, average;
    number = 2;
    counter = 0;
    total = 0;
    while (number != 0){
        std::cout<<"Enter a number: "<<std::endl;
        std::cin>>number;
        total = total + number;
        counter = counter + 1;
        average = total/counter;
        std::cout<<"the average so far is: "<<average<<std::endl;
    }
}