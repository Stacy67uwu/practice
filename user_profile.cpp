#include <iostream>
#include <string>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
      #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif 

    // === ОБЪЯВЛЕНИЕ ПЕРЕМЕННЫХ ===

    // Личные данные (заполнить собственными данными)
    std::string firstName = "Анастасия";     // Имя
    std::string lastName = "Плаксина";      // Фамилия
    int age = 17;                    // Возраст (целое число)
    char gender = 'F';              // Пол ('M' или 'F')
    double height = 1.75;            // Рост в метрах
    double weight = 75;            // Вес в килограммах

    // Учебные данные
    std::string group = "ИСПкр-252";         // Номер группы
    int course = 2;                 // Курс (1-4)
    double averageGrade = 4.82;      // Средний балл
    bool hasScholarship = true;    // Наличие стипендии

    // Контактные данные
    std::string email = "plaksinan27@gmail.com";         // Адрес электронной почты
    std::string phone = "8-800-555-3535";         // Номер телефона

    // === ВЫВОД ИНФОРМАЦИИ ===

    std::cout << "==============================" << std::endl;
    std::cout << "     ПРОФИЛЬ ПОЛЬЗОВАТЕЛЯ     " << std::endl;
    std::cout << "==============================" << std::endl;

    std::cout << std::endl;
    std::cout << "--- Личные данные ---" << std::endl;
    std::cout << "Имя: " << firstName << std::endl;
    std::cout << "Фамилия: " << lastName << std::endl;
    std::cout << "Возраст: " << age << " лет" << std::endl;
    std::cout << "Пол: " << gender << std::endl;
    std::cout << "Рост: " << height << " м" << std::endl;
    std::cout << "Вес: " << weight << " кг" << std::endl;

    std::cout << std::endl;
    std::cout << "--- Учебные данные ---" << std::endl;
    std::cout << "Группа: " << group << std::endl;
    std::cout << "Курс: " << course << std::endl;
    std::cout << "Средний балл: " << averageGrade << std::endl;
    std::cout << "Стипендия: " << (hasScholarship ? "Да" : "Нет") << std::endl;

    std::cout << std::endl;
    std::cout << "--- Контактные данные ---" << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "Телефон: " << phone << std::endl;

    std::cout << std::endl;
    std::cout << "==============================" << std::endl;

    return 0;
}