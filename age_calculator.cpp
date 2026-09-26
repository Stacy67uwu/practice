#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
SetConsoleCP(65001);
SetConsoleOutputCP(65001);
#endif

// Константы
const int CURRENT_YEAR = 2024;
const int RETIREMENT_AGE = 65;
const int ADULT_AGE = 18;
const int DRIVING_AGE = 18;

// Данные пользователя (указать собственный год рождения)
int birthYear = 2009;

// Вычисления
int age = CURRENT_YEAR - birthYear;
int ageInMonths = age * 12;          // Возраст в месяцах
int ageInDays = age * 365;           // Возраст в днях (приблизительно)
int yearsToRetirement = RETIREMENT_AGE - age;
bool isAdult = (age >= ADULT_AGE);
bool canDrive = (age >= DRIVING_AGE);

// Вывод результатов
std::cout << "=== КАЛЬКУЛЯТОР ВОЗРАСТА ===" << std::endl;
std::cout << std::endl;

std::cout << "Год рождения: " << birthYear << std::endl;
std::cout << "Текущий год: " << CURRENT_YEAR << std::endl;
std::cout << "Ваш возраст: " << age << " лет" << std::endl;
std::cout << "Возраст в месяцах: " << ageInMonths << " мес." << std::endl;
std::cout << "Возраст в днях: " << ageInDays << " дней" << std::endl;
std::cout << std::endl;

std::cout << "Совершеннолетний: " << (isAdult ? "Да" : "Нет") << std::endl;
std::cout << "Может водить: " << (canDrive ? "Да" : "Нет") << std::endl;
std::cout << "До пенсии: " << yearsToRetirement << " лет" << std::endl;

return 0;
}
