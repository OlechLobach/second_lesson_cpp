#include <iostream>
#include <cmath>
#include <Windows.h>

const double pi = 3.14159265358979323846;

int main() {
    system("chcp 1251");
    system("cls");
    double radius;

    std::cout << "ќбчисленн€ об'Їму кул≥" << std::endl;
    std::cout << "¬вед≥ть рад≥ус кул≥ (у сантиметрах): ";
    std::cin >> radius;
    double volume = (4.0 / 3.0) * pi * std::pow(radius, 3);

    std::cout << "ќб'Їм кул≥ з рад≥усом " << radius << " см: " << volume << " куб. см" << std::endl;

    return 0;
}
