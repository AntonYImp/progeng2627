#include <iostream>

int main(){
    int n,sum;
    sum = 0;

    std::cout << "enter a number:" << std::endl;
    std::cin >> n;
    sum = sum + n;
    std::cout << "current sum: " << sum << std::endl;

    while( n != 0  ) {
        std::cout << "enter a number:" << std::endl;
        std::cin >> n;
        sum = sum + n;
        std::cout << "current sum: " << sum << std::endl;
    }
}