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

    int totalScore;        
    int labScore;          
    int examScore;         
    std::string grade;     
    std::string status;    

    std::cout << "=== СИСТЕМА ОЦЕНИВАНИЯ СТУДЕНТОВ ===" << std::endl;
    std::cout << std::endl;

    std::cout << "Введите баллы за лабораторные работы (0-40): ";
    std::cin >> labScore;

    std::cout << "Введите баллы за экзамен (0-60): ";
    std::cin >> examScore;

if (labScore < 0 || labScore > 40) {
    std::cout << "Ошибка: баллы за лабораторные должны быть от 0 до 40" << std::endl;
    return 1;
}

if (examScore < 0 || examScore > 60) {
    std::cout << "Ошибка: баллы за экзамен должны быть от 0 до 60" << std::endl;
    return 1;
}

totalScore = labScore + examScore;

std::cout << std::endl;
std::cout << "Ваш общий балл: " << totalScore << " из 100" << std::endl;
std::cout << std::endl;

if (totalScore >= 90) {
    grade = "5 (Отлично)";
    status = "ЗАЧТЕНО";
} else if (totalScore >= 75) {
    grade = "4 (Хорошо)";
    status = "ЗАЧТЕНО";
} else if (totalScore >= 60) {
    grade = "3 (Удовлетворительно)";
    status = "ЗАЧТЕНО";
} else {
    grade = "2 (Неудовлетворительно)";
    status = "НЕ ЗАЧТЕНО";
}

std::cout << "Оценка: " << grade << std::endl;
std::cout << "Статус: " << status << std::endl;

std::cout << std::endl;
std::cout << "=== АНАЛИЗ РЕЗУЛЬТАТОВ ===" << std::endl;

if (examScore < 20) {
    std::cout << "Внимание: набрано менее 20 баллов за экзамен" << std::endl;
    std::cout << "Рекомендуется пересдача экзамена." << std::endl;
}

if (labScore < 20) {
    std::cout << "Внимание: низкая активность на лабораторных работах." << std::endl;
} else if (labScore >= 35) {
    std::cout << "Отличная работа на лабораторных." << std::endl;
}

if (totalScore < 60) {
    std::cout << std::endl;
    std::cout << "Для получения зачёта необходимо набрать минимум 60 баллов." << std::endl;
    std::cout << "Недостающее количество баллов: " << (60 - totalScore) << std::endl;
} else if (totalScore < 90) {
    std::cout << std::endl;
    std::cout << "Для получения оценки 'Отлично' необходимо набрать 90 и более баллов." << std::endl;
    std::cout << "Недостающее количество баллов: " << (90 - totalScore) << std::endl;
} else {
    std::cout << std::endl;
    std::cout << "Достигнут максимальный уровень." << std::endl;
}

std::cout << std::endl;
if (totalScore >= 75 && examScore >= 30) {
    std::cout << "Имеются основания для получения академической стипендии." << std::endl;
} else if (totalScore >= 60) {
    std::cout << "Баллов недостаточно для получения стипендии." << std::endl;
}

    return 0;
}