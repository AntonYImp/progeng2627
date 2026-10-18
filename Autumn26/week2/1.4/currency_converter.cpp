#include <iostream>
#include <windows.h>
// for the correct symbols to show up

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double money,rate;
    std::cout << "How much money are you converting" << std::endl;
    std::cin >> money;
    std::cout << "What is the rate" << std::endl;
    std::cin >> rate;
    std::cout << "£" << money << " ---> €" << (money*rate);
}