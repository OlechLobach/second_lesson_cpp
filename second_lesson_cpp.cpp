#include <iostream>

int main() {
    system("chcp 1251");
    system("cls");
    int hryvnia, kopecks;

    std::cout << "Введіть суму в гривнях: ";
    std::cin >> hryvnia;

    std::cout << "Введіть суму в копійках: ";
    std::cin >> kopecks;

    if (kopecks >= 100) {
        hryvnia += kopecks / 100;
        kopecks %= 100;
    }

    std::cout << "Коректована сума: " << hryvnia << " грн. " << kopecks << " коп." << std::endl;

    return 0;
}
