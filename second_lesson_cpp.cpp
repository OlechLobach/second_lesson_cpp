#include <iostream>

int main() {
    double v; 
    double t; 
    double a;

    std::cout << "������ �������� (�/�): ";
    std::cin >> v;
    std::cout << "������ ��� (���): ";
    std::cin >> t;
    std::cout << "������ ����������� (�/�^2): ";
    std::cin >> a;

    double S = v * t + (a * t * t) / 2;

    std::cout << "�������� �������: " << S << " �����" << std::endl;

    return 0;
}
