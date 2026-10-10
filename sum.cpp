#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif

    int n; 
    std::cout << "Введите n: ";
    std::cin >> n;

    int sum = 0;
    double product = 1.0;

    for( int i = 1; i <= n; i++ ) {
        sum += 1;
        product *= i;
    }

    std::cout << "Сумма: " << sum << std::endl;
    std::cout << "Произведение: " << product << std::endl;

    return 0;
}