#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

int main() {
    #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif
    cout << "================================" << endl;
    cout << "       Информация о студенте    " <<  ::endl;
    cout << "================================" << endl;

    cout << endl;
    cout << "Имя: Анастасия Плаксина" << endl;
    cout << "Группа: ИСПкр-252" << endl;
    cout << "Возраст: 17 лет" << endl;

    cout << endl;
    cout << "Мои увлечения:" << endl;
    cout << "  1. Чтение" << endl;
    cout << "  2. Рисование" << endl;
    cout << "  3. Видео игры" << endl;

    cout << endl;
    cout << "Почему я изучаю программирование:" << endl;
    cout << "Для будущей професии" << endl;
    
    cout << endl;
    cout << "================================" << endl;

    return 0;
}