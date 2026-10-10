#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif
    
    int start, end;
    std::cout << "Введите начало и конец диапазона: ";
    std::cin >> start >> end;

    int sum = 0;

    for (int i = start; i <= end; i++) {
        if (i % 3 == 0 || i % 10 == 5) {
            continue;
        }
        sum += i;
    }

    std::cout << "Сумма подходящих чисел: " << sum << std::endl;

    return 0;
}
