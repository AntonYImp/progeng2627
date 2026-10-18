#include <iostream>
#include <windows.h>
// for the correct symbols to show up

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double temp_c;
    std::cout << "what is the temperture(°C)" << std::endl;
    std::cin >> temp_c;
    std::cout << temp_c << "°C ---> " << (temp_c*1.8 + 32) << "F";
}