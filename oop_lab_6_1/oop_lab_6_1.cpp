#include <iostream>
#include <cmath> // для std::abs, якщо потрібен універсальний підхід

// Шаблонна функція для обчислення модуля
template <typename T>
T absValue(T value) {
    return value < 0 ? -value : value;
}

int main() {
    int intValue = -5;
    double doubleValue = -3.14;

    std::cout << "Modul: " << intValue << " = " << absValue(intValue) << std::endl;
    std::cout << "Modul: " << doubleValue << " = " << absValue(doubleValue) << std::endl;

    return 0;
}
