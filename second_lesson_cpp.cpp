#include <iostream>

int main() {
    double mapScale, distanceOnMap;
    system("chcp 1251");
    system("cls");
    std::cout << "Обчислення відстані між населеними пунктами" << std::endl;
    std::cout << "Введіть вихідні дані:" << std::endl;

    std::cout << "Масштаб карти (кількість кілометрів в одному сантиметрі) -> ";
    std::cin >> mapScale;

    std::cout << "Відстань між точками, що зображують населені пункти (см) -> ";
    std::cin >> distanceOnMap;

    double distanceInKm = distanceOnMap / mapScale;

    std::cout << "Відстань між населеними пунктами " << distanceInKm << " км." << std::endl;

    return 0;
}
