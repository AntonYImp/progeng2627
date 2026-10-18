#include <iostream>

int main() {
    int x,y;
    std::cout << "what is length 1" << std::endl;
    std::cin >> x;
    std::cout << "what is length 2" << std::endl;
    std::cin >> y;
    std::cout << "the perimeter of your rectangle is " << 2*(x+y) << " and the area is " << x*y << std::endl;

}