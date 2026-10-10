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

    if (number < 0) {
        number = -number;
    }

    int sum = 0;

    std::cout << "Цифры числа: ";
    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        std::cout << digit << " ";
        number /= 10;
    }
    std::cout << "\nСумма цифр: " << sum << std::endl;

    return 0;
}
