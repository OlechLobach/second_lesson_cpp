#include <iostream>

int main() {
    double mapScale, distanceOnMap;
    system("chcp 1251");
    system("cls");
    std::cout << "���������� ������ �� ���������� ��������" << std::endl;
    std::cout << "������ ������ ���:" << std::endl;

    std::cout << "������� ����� (������� �������� � ������ ���������) -> ";
    std::cin >> mapScale;

    std::cout << "³������ �� �������, �� ���������� ������� ������ (��) -> ";
    std::cin >> distanceOnMap;

    double distanceInKm = distanceOnMap / mapScale;

    std::cout << "³������ �� ���������� �������� " << distanceInKm << " ��." << std::endl;

    return 0;
}
