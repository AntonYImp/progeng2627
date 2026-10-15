#include <iostream>

int main(){
    int x;
    int total = 1;

    std::cout << "what factorial do you want to calculate ";
    std::cin >> x; 

    

    for (int i=0;i<x;i++) {
        total = total*(i+1);
    }
    std::cout << "The factorial of " << x << " is " << total;
}