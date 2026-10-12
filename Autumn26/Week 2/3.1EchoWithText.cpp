#include <iostream>
#include <string>

int main(){
    std::string message;
    std::cin>> message;

    while(message != "STOP"){
        std::cout<<message<<std::endl;
        std::cin>>message;
    }

}
