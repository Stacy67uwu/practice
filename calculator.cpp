#include <iostream>
#include <iomanip>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    
    #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif

    double num1, num2;
    char operation;
    double result; 

    std::cout << "=== ПРОСТОЙ КАЛЬКУЛЯТОР ===" << std::endl;
    std::cout << std::endl;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите операцию (+, -, *, /, %): ";
    std::cin >> operation;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    bool valid = true;

if (operation == '+') {
    result = num1 + num2;
} else if (operation == '-') {
    result = num1 - num2;
} else if (operation == '*') {
    result = num1 * num2;
} else if (operation == '/') {
    if (num2 != 0) {
        result = num1 / num2;
    } else {
        std::cout << "Ошибка: деление на ноль!" << std::endl;
        valid = false;
    }
} else if (operation == '%') {
    int int1 = static_cast<int>(num1);
    int int2 = static_cast<int>(num2);
    if (int2 != 0) {
        result = int1 % int2;
    } else {
        std::cout << "Ошибка: деление на ноль!" << std::endl;
        valid = false;
    }
} else {
    std::cout << "Ошибка: неизвестная операция!" << std::endl;
    valid = false;
}

if (valid) {
    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << num1 << " " << operation << " " << num2
              << " = " << result << std::endl;
}

std::cout << std::endl;
std::cout << "=== ДЕМОНСТРАЦИЯ ОСОБЕННОСТЕЙ ===" << std::endl;

std::cout << std::endl << "Деление 7 / 3:" << std::endl;
std::cout << "  int / int = " << (7 / 3) << std::endl;
std::cout << "  double / int = " << (7.0 / 3) << std::endl;

std::cout << std::endl << "Остаток от деления:" << std::endl;
std::cout << "  10 % 3 = " << (10 % 3) << std::endl;
std::cout << "  15 % 5 = " << (15 % 5) << std::endl;

int x = 5;
std::cout << std::endl << "Инкремент (x = 5):" << std::endl;
std::cout << "  ++x = " << (++x) << ", после x = " << x << std::endl;
x = 5;
std::cout << "  x++ = " << (x++) << ", после x = " << x << std::endl;

std::cout << std::endl << "Приоритет операций:" << std::endl;
std::cout << "  2 + 3 * 4 = " << (2 + 3 * 4) << " (умножение первым)" << std::endl;
std::cout << "  (2 + 3) * 4 = " << ((2 + 3) * 4) << std::endl;

    return 0;
}