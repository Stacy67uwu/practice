#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif
    
    int target;
    std::cout << "Какое произведение найти в таблице 10x10? ";
    std::cin >> target;

    bool found = false;
    int row = 0;
    int col = 0;

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (i * j == target) {
                row = i;
                col = j;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (found) {
        std::cout << "Найдено! Строка: " << row << ", Столбец: " << col << std::endl;
    } else {
        std::cout << "Такого значения в таблице 10x10 нет." << std::endl;
    }

    return 0;
}
