#include <iostream>

int main() {
    double height, weight, BMI;
    std::cout<<"Enter height in meters: " << std::endl;
    std:: cin>>height;

    std::cout<<"Enter weight in kilograms: " << std::endl;
    std:: cin>>weight;

    BMI = weight/(height*height);

    //round the value to 1 decimal place
    BMI = round(BMI*10)/10;

    std::cout<<"Your BMI is " << BMI << std::endl;
    
    
}