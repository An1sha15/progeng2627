//Rectangles

#include <iostream>

int main() {
    double length, width, area, perimeter;
    std::cout<<"Enter the length: " << std::endl;
    std:: cin>>length;

    std::cout<<"Enter the width: "<< std::endl;
    std:: cin>>width;

    area = length * width;
    perimeter = 2*(length+width);

    std::cout<<"the area of the rectangle is " <<area<< std::endl;
    std::cout<<"the perimeter of the rectangle is " <<perimeter<< std::endl;



}