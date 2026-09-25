#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif
    std::cout << "================================" << std::endl;
    std::cout << "       Информация о студенте    " << std::endl;
    std::cout << "================================" << std::endl;

    std::cout << std::endl;
    std::cout << "Имя: Анастасия Плаксина" << std::endl;
    std::cout << "Группа: ИСПкр-252" << std::endl;
    std::cout << "Возраст: 17 лет" << std::endl;

    std::cout << std::endl;
    std::cout << "Мои увлечения:" << std::endl;
    std::cout << "  1. Чтение" << std::endl;
    std::cout << "  2. Рисование" << std::endl;
    std::cout << "  3. Видео игры" << std::endl;

    std::cout << std::endl;
    std::cout << "Почему я изучаю программирование:" << std::endl;
    std::cout << "Для будущей професии" << std::endl;

    std::cout << std::endl;
    std::cout << "================================" << std::endl;

    return 0;
}