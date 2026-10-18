#include <iostream>
#include <iomanip>
//for rounding

int main() {
    double mass,height;
    std::cout << "what is your weight(kg)" << std::endl;
    std::cin >> mass;
    std::cout << "what is your height(m)" << std::endl;
    std::cin >> height;
    std::cout << "Your BMI is " << std::fixed << std::setprecision(1) <<mass/(height*height);
}