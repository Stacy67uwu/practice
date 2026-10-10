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
    int count = 0;
    int sum = 0;

    do {
        std::cout << "Введите число (0 для выхода): ";
        std::cin >> number;

        if( number != 0 ) {
            sum += number;
            count++;
        }
    } while( number != 0);

    if ( count > 0 ) {
        double average = (double)sum / count;
        std::cout << "Количество: " << count << std::endl;
        std::cout << "Сумма: " << sum << std::endl;
        std::cout << "Среднее: " << average << std::endl;
    } else {
        std::cout << "Вы не ввели ни одного числа, кроме нуля." << std::endl;
    }

    return 0;
}