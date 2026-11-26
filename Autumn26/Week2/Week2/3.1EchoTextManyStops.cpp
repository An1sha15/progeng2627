#include <iostream>
#include <string>

int main(){
    std::string message;
    std::cin>> message;

    while((message != "STOP")&&(message != "Stop")&&(message != "stop")){
        std::cout<<message<<std::endl;
        std::cin>>message;
    }

}