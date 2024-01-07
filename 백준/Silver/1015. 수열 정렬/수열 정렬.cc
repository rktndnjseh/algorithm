#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<std::pair<int, int>> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i].first;
        A[i].second = i;
    }

    std::sort(A.begin(), A.end());

    std::vector<int> P(N);

    for (int i = 0; i < N; i++) {
        P[A[i].second] = i;
    }

    for (int i = 0; i < N; i++) {
        std::cout << P[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}
