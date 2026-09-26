#include <iostream>
#include <iomanip>
#include <string>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {

     #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif

    std::string firstName;    // Имя
std::string lastName;     // Фамилия
int age;                  // Возраст
double height;            // Рост в метрах
double weight;            // Вес в килограммах
int course;               // Курс обучения

std::cout << "=== АНКЕТА СТУДЕНТА ===" << std::endl;
std::cout << std::endl;

std::cout << "Введите имя: ";
std::cin >> firstName;

std::cout << "Введите фамилию: ";
std::cin >> lastName;

std::cout << "Введите возраст: ";
std::cin >> age;

std::cout << "Введите рост (в метрах, например 1.75): ";
std::cin >> height;

std::cout << "Введите вес (в кг): ";
std::cin >> weight;

std::cout << "Введите курс обучения (1-4): ";
std::cin >> course;

double bmi = weight / (height * height);

std::cout << std::endl;
std::cout << std::setfill('=') << std::setw(40) << "" << std::endl;
std::cout << "         КАРТОЧКА СТУДЕНТА" << std::endl;
std::cout << std::setfill('=') << std::setw(40) << "" << std::endl;

std::cout << std::setfill(' ');  // Возврат пробела в качестве заполнителя

std::cout << std::left << std::setw(15) << "Фамилия:"
          << std::right << std::setw(20) << lastName << std::endl;

std::cout << std::left << std::setw(15) << "Имя:"
          << std::right << std::setw(20) << firstName << std::endl;

std::cout << std::left << std::setw(15) << "Возраст:"
          << std::right << std::setw(17) << age << " лет" << std::endl;

std::cout << std::left << std::setw(15) << "Курс:"
          << std::right << std::setw(20) << course << std::endl;

std::cout << std::left << std::setw(15) << "Рост:"
          << std::right << std::setw(17)
          << std::fixed << std::setprecision(2) << height << " м" << std::endl;

std::cout << std::left << std::setw(15) << "Вес:"
          << std::right << std::setw(16)
          << std::fixed << std::setprecision(1) << weight << " кг" << std::endl;

std::cout << std::left << std::setw(15) << "ИМТ:"
          << std::right << std::setw(20)
          << std::fixed << std::setprecision(1) << bmi << std::endl;

std::cout << std::setfill('-') << std::setw(40) << "" << std::endl;

    return 0;
}