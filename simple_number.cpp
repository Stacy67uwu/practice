#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif
        
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    if (number <= 1) {
        std::cout << "Число не является простым." << std::endl;
        return 0;
    }

    bool is_prime = true;

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime) {
        std::cout << "Число простое." << std::endl;
    } else {
        std::cout << "Число не является простым." << std::endl;
    }

    return 0;
}
