#include <iostream>
#include <cmath>
#include <Windows.h>

const double pi = 3.14159265358979323846;

int main() {
    system("chcp 1251");
    system("cls");
    double radius;

    std::cout << "���������� ��'��� ���" << std::endl;
    std::cout << "������ ����� ��� (� �����������): ";
    std::cin >> radius;
    double volume = (4.0 / 3.0) * pi * std::pow(radius, 3);

    std::cout << "��'�� ��� � ������� " << radius << " ��: " << volume << " ���. ��" << std::endl;

    return 0;
}
