#include <iostream>

int main() {
    double length, width, height;
    system("chcp 1251");
    system("cls");

    std::cout << "���������� ��'��� �������������" << std::endl;
    std::cout << "������ ������ ���:" << std::endl;

    std::cout << "������� (��) -> ";
    std::cin >> length;

    std::cout << "������ (��) -> ";
    std::cin >> width;

    std::cout << "������ (��) -> ";
    std::cin >> height;

    double volume = length * width * height;

    std::cout << "��'��: " << volume << " ���.��." << std::endl;

    return 0;
}
