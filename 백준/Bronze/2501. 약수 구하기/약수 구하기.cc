#include <iostream>
#include <cmath>

int main() {
    int N, K;
    int count = 0;
    std::cin >> N >> K;
    int* array = new int[N];
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            array[count] = i;
            count++;
        }
    }
    if (K <= count)
        std::cout << array[K - 1];
    else
        std::cout << 0;

    delete[] array;
    return 0;
}
