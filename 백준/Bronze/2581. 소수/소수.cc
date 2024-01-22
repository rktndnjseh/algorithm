#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int M, N;
    std::cin >> M >> N;
    int sum = 0;
    int min = 10001;
    for (int i = M; i <= N; i++) {
        if (isPrime(i)) {
            sum += i;
            if (i < min) {
                min = i;
            }
        }
    }
    if (sum == 0) {
        std::cout << -1;
    }
    else {
        std::cout << sum << std::endl << min;
    }

    return 0;
}
