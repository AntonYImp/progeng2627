#include <iostream>

int main(){
    double n,sum,avg;
    sum = 0;
    avg = 0;
    int count = 0;

    std::cout << "enter a number:" << std::endl;
    std::cin >> n;

    while(n != 0){
        count++;
        sum = sum + n;
        avg = sum / count;
        std::cout << "current avg: " << avg << std::endl;
        std::cout << "enter a number:" << std::endl;
        std::cin >> n;
    }
}