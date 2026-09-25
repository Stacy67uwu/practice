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

    std::cout << "=== АНТИКВАРНЫЙ МАГАЗИН ===" << std::endl;
    std::cout << std::endl;

    std::string itemName;
    std::string itemEra;
     std::string itemType;
    double price;
    int quantity;
    bool instock;

    std::cout << "Введите название предмета:";
    std::getline(std::cin, itemName);

    std::cout << "Введите эпоху (например, XIX век):";
    std::getline(std::cin, itemEra);

    std::cout << "Введите тип предмета (например, мебель, монета):";
    std::getline(std::cin, itemType);

    std::cout << "Введите цену (руб):";
    std::cin >> price;

std::cout << "Введите количество на складе:";
std::cin >> quantity;

instock = (quantity > 0);

double discount = price * 0.1;
double finalPrice = price - discount;
double totalValue = finalPrice * quantity;

std::cout << std::endl;
    std::cout << "--- ИНФОРМАЦИЯ О ПРЕДМЕТЕ ---" << std::endl;
    std::cout << "Название: " << itemName << std::endl;
    std::cout << "Эпоха: " << itemEra << std::endl;
    std::cout << "Тип предмета: " << itemType << std::endl;
    std::cout << "Цена со скидкой: " << finalPrice << " руб." << std::endl;
    std::cout << "Всего на складе: " << quantity << " шт." << std::endl;
    std::cout << "Общая стоимость партии: " << totalValue << " руб." << std::endl;

    return 0;
}
