#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif
    
    double start, end, step;
    std::cout << "Введите начало отрезка, конец отрезка и шаг: ";
    std::cin >> start >> end >> step;

    if (step <= 0 || start > end) {
        std::cout << "Некорректные параметры отрезка или шага." << std::endl;
        return 0;
    }

    std::cout << "\nX\tY" << std::endl;
    std::cout << "-----------------" << std::endl;

    double x = start;
    double y = x * x - 3 * x;

    std::cout << x << "\t" << y << std::endl;

    double max_y = y;
    double min_y = y;
    double prev_y = y;
    int sign_changes = 0;

    for (x = start + step; x <= end + 0.00001; x += step) {
        y = x * x - 3 * x;
        std::cout << x << "\t" << y << std::endl;

        if (y > max_y) {
            max_y = y;
        }
        if (y < min_y) {
            min_y = y;
        }

        if ((prev_y > 0 && y < 0) || (prev_y < 0 && y > 0)) {
            sign_changes++;
        }

        if (y != 0) {
            prev_y = y;
        }
    }

    std::cout << "-----------------" << std::endl;
    std::cout << "Наибольшее значение Y: " << max_y << std::endl;
    std::cout << "Наименьшее значение Y: " << min_y << std::endl;
    std::cout << "Количество смен знака: " << sign_changes << std::endl;

    return 0;
}
