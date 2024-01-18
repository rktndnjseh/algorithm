#include <iostream>
#include <cmath>

int main() {
    int A, B, V;
    std::cin >> A >> B >> V;

    int days = std::ceil(static_cast<double>(V - B) / (A - B));

    std::cout << days;

    return 0;
}