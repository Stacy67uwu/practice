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

    int found_number = -1;

    for (int i = start; i <= end; i++) {
        if (i % 7 == 0 && i % 11 == 0) {
            found_number = i;
            break;
        }
    }

    if (found_number != -1) {
        std::cout << "Первое подходящее число: " << found_number << std::endl;
    } else {
        std::cout << "Число не найдено." << std::endl;
    }

    return 0;
}
