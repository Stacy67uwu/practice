#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif

    int count;
    std::cout << "Сколько чисел вы хотите ввести? ";
    std::cin >> count;

    if ( count <= 0) {
        std::cout << "Некорректное количество." << std::endl;
        return 0;
    }

    int number;
    std::cout << "Введите число 1: ";
    std::cin >> number;

    int max_val = number;
    int min_val = number;

    for ( int i = 2; i <= count; i++ ) {
        std::cout << "Введите число " << i << " :";
        std::cin >> number;

        if ( number > max_val ) {
            max_val = number;
        }
        if ( number < min_val)
        {
            min_val = number;
        }
        
    }

    std::cout << "Наибольшее: " << max_val << std::endl;
    std::cout << "Наименьшее: " << min_val << std::endl;

    return 0;
}