#include <iostream>
#include <cmath>

int main() {
    system("chcp 1251");
    system("cls");
    const double pi = 3.14;
    double L;

    std::cout << "������ ������� ���� (��): ";
    std::cin >> L;
    double R = L / (2 * pi);

    double S = pi * std::pow(R, 2);

    std::cout << "����� ����: " << S << " ��. ��" << std::endl;

    return 0;
}
