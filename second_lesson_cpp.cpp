#include<iostream>
#include<Windows.h>
int main() {
    system("chcp 1251");
    system("cls");
    int year;
    std::cout << "������ ��: ";
    std::cin >> year;
    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    
    int daysInYear = isLeapYear ? 366 : 365;

    std::cout << "� ���� " << year << " � " << daysInYear << " ���." << std::endl;
	return 0;
}