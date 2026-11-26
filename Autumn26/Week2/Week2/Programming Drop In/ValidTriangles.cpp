//Valid Triangle 
#include <iostream>

int main(){

    //get three inputs for three sides of a triangle
    double a,b,c,area,s;
    std::cout<<"Enter side length: "<<std::endl;
    std::cin>>a;
    std::cout<<"Enter side length: "<<std::endl;
    std::cin>>b;
    std::cout<<"Enter side length: "<<std::endl;
    std::cin>>c;

    if ((a+b>c)&&(a+c>b)&&(b+c>a)){
        if ((a==b)&&(b==c)){
            std::cout<<"It is equilateral"<<std::endl;
        }
        else if ((a!=b)&&(b!=c)&&(c!=a)){
            std::cout<<"It is scalene"<<std::endl;
        }
        else{
            std::cout<<"It is isosceles"<<std::endl;
        }

        //Heron's formula
        s = (a+b+c)/2.0;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        std::cout<<"The area is: "<<area<<std::endl;

    }
    else{
        std::cout<<"Not a valid triangle"<<std::endl;
    }
}