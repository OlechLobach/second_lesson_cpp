#include <iostream>

int main() {
    double length, width, height;
    system("chcp 1251");
    system("cls");

    std::cout << "Обчислення об'єму паралелепіпеда" << std::endl;
    std::cout << "Введіть вихідні дані:" << std::endl;

    std::cout << "Довжина (см) -> ";
    std::cin >> length;

    std::cout << "Ширина (см) -> ";
    std::cin >> width;

    std::cout << "Висота (см) -> ";
    std::cin >> height;

    double volume = length * width * height;

    std::cout << "Об'єм: " << volume << " куб.см." << std::endl;

    return 0;
}
