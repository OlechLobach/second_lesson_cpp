#include <iostream>

int main() {
    double v; 
    double t; 
    double a;

    std::cout << "¬вед≥ть швидк≥сть (м/с): ";
    std::cin >> v;
    std::cout << "¬вед≥ть час (сек): ";
    std::cin >> t;
    std::cout << "¬вед≥ть прискоренн€ (м/с^2): ";
    std::cin >> a;

    double S = v * t + (a * t * t) / 2;

    std::cout << "ѕройдена в≥дстань: " << S << " метр≥в" << std::endl;

    return 0;
}
