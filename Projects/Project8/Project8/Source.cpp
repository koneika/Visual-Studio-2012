#include <iostream>
#include <vector>

int main() {
    // ������� ������ ����� �����
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // ���������� ����������� ���� ��� ������ ������� �������� �������
    std::cout << "�������� �������: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}