#include <iostream>

int storePoint(int N) {
    int result = 1;
    for (int i = 0; i < N; i++) {
        result *= 2;
    }
    result = (result + 1) * (result + 1);
    return result;
}

int main() {
    int N;
   std::cin >> N;
    int result = storePoint(N);
    std::cout << result << std::endl;
    return 0;
}