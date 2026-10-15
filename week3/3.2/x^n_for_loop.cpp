#include <iostream>

int main(){
    int n;
    int x;
    int total = 1;

    std::cout << "what number are you raising to the power?"<<std::endl;
    std::cin >> x;
    std::cout << "what power are you raising it to?"<<std::endl;
    std::cin >> n;

    for (int i=0;i<n;i++) {
        total = total*x;
    }

    std::cout << x << " raised to the power of " << n << " is " << total;
}