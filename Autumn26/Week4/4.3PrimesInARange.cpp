//Primes in a range
#include <iostream>

int smallest_factor(int n){
    bool prime = true;
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

           return prime = false;
        }


    }
    return prime = true;
   
}

int main(){
    int n1, n2, i;
    bool prime;

    std::cout<<"Enter an lower bound (>1) and upper bound: "<<std::endl;
    std::cin>>n1>>n2;
    
    
    for (i = n1;i<=n2;i++){
        prime = smallest_factor(i);
        if(prime==true){
            std::cout<<i<<std::endl;
        }

    }




}
