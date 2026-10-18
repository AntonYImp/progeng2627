#include <iostream>

int main() {
    int a,b,counter,remainder;
    counter = 0;
    std::cout << "Please enter a number and another which you want to divide it by (x y)" << std::endl;
    std::cin >> a >> b;
    
    std::cout << a << " divided by " << b << " = ";

    while (a > b) {
        counter++;
        a = a-b;
    }
    std::cout << counter << " remainder " << a;
}