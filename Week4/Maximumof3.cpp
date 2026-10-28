//Maximum of three numbers

#include <iostream>

int max(int a, int b, int c){
    if ((a>b)&&(a>c)){
        return a;
    }
    else if((b>a)&&(b>c)){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int n,p,m;
    std::cout<<"Enter 3 numbers: " <<std::endl;
    std::cin>>n>>m>>p;

    std::cout<<"Max number is: "<< max(n,m,p) << std::endl;
}
