#include <iostream>
#include <string>
#include <iomanip>

#ifdef _WIN32
#include <windows.h>
#endif

const int MAX_LENSES = 100;

int main() {
    #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif

    std::cout << "=== УЧЁТ ОПТИКИ И ЛИНЗ ===" << std::endl;
    std::string lensNames[MAX_LENSES];
    double diopters[MAX_LENSES];
    int count = 0;

    std::cout << "Вводите бренд линзы и её диоптрию (нажмите Enter на пустом названии для завершения):" << std::endl;

     while (count < MAX_LENSES) {
        std::string name;
        std::cout << "Название/Бренд линзы: ";
        std::getline(std::cin, name);
        if (name.empty()) {
            break; }

             double diopter;
        std::cout << "Диоптрия (например, -2.5 или 1.75): ";
        std::cin >> diopter;
        std::cin.ignore(); 

        lensNames[count] = name;
        diopters[count] = diopter;
        count++;
    }
    if (count == 0) {
        std::cout << "Список линз пуст. Программа завершена." << std::endl;
        return 0;
    }
    std::cout << "\n=== ВСЕ ЛИНЗЫ В НАЛИЧИИ ===" << std::endl;

    std::cout << std::fixed << std::setprecision(2);

    for (int i = 0; i < count; i++) {
        std::cout << (i + 1) << ". Брэнд: " << lensNames[i] << " - Диоптрия: ";
        std::cout << std::showpos << diopters[i];
        std::cout << std::noshowpos << " дптр." << std::endl;
    }

    double minDiopter = diopters[0];
    double maxDiopter = diopters[0];
    double sum = 0;

    for (int i = 0; i < count; i++) {
        if (diopters[i] < minDiopter) minDiopter = diopters[i];
        if (diopters[i] > maxDiopter) maxDiopter = diopters[i];
        sum += diopters[i];
    }
    double avgDiopter = sum / count;

    std::cout << "\n=== СТАТИСТИКА АССОРТИМЕНТА ===" << std::endl;
    std::cout << "Всего линз в базе: " << count << " шт." << std::endl;

    std::cout << std::fixed << std::setprecision(2) << std::showpos;
    
    std::cout << "Минимальная диоптрия (макс. минус): " << minDiopter << " дптр." << std::endl;
    std::cout << "Максимальная диоптрия (макс. плюс):  " << maxDiopter << " дптр." << std::endl;
    std::cout << "Среднее оптическое значение:        " << avgDiopter << " дптр." << std::endl;
    
    std::cout << std::noshowpos;

    std::cout << "\n=== ЛИНЗЫ С ДИОПТРИЕЙ ВЫШЕ СРЕДНЕЙ ===" << std::endl;

    std::cout << std::fixed << std::setprecision(2) << std::showpos;

    for (int i = 0; i < count; i++) {
        if (diopters[i] > avgDiopter) {
            std::cout << "  " << lensNames[i] << " (диоптрия: " << diopters[i] << " дптр.)" << std::endl;
        }
    }
    std::cout << std::noshowpos;

    double threshold;
    std::cout << "\nВведите пороговое значение диоптрии для фильтрации (например, -2.0 или 1.5): ";
    std::cin >> threshold;

    std::cout << "\nЛинзы с диоптрией >= " << std::showpos << threshold << std::noshowpos << ":" << std::endl;
    
    int found = 0;
    std::cout << std::showpos;

    for (int i = 0; i < count; i++) {
        if (diopters[i] >= threshold) {
            std::cout << "  " << lensNames[i] << " (диоптрия: " << diopters[i] << " дптр.)" << std::endl;
            found++;
        }
    }
    std::cout << std::noshowpos;

     if (found == 0) {
        std::cout << "  Линзы с указанной или большей диоптрией отсутствуют" << std::endl;
    }

    return 0;
}