#include <iostream>

int main() {
    system("chcp 1251");
    system("cls");
    int hryvnia, kopecks;

    std::cout << "������ ���� � �������: ";
    std::cin >> hryvnia;

    std::cout << "������ ���� � �������: ";
    std::cin >> kopecks;

    if (kopecks >= 100) {
        hryvnia += kopecks / 100;
        kopecks %= 100;
    }

    std::cout << "����������� ����: " << hryvnia << " ���. " << kopecks << " ���." << std::endl;

    return 0;
}
