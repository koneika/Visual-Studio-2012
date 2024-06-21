#include <iostream>
#include <vector>

int main() {
    // —оздаем вектор целых чисел
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // »спользуем диапазонный цикл дл€ вывода каждого элемента вектора
    std::cout << "Ёлементы вектора: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}