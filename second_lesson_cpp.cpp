#include <iostream>

int main() {
    system("chcp 1251");
    system("cls");
    double R1, R2, R3;

    std::cout << "Ââåä³òü îï³ð R1: ";
    std::cin >> R1;
    std::cout << "Ââåä³òü îï³ð R2: ";
    std::cin >> R2;
    std::cout << "Ââåä³òü îï³ð R3: ";
    std::cin >> R3;

    double R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    std::cout << "Îï³ð R0: " << R0 << std::endl;

    return 0;
}
