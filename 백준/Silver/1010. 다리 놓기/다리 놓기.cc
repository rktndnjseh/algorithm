#include <iostream>
#include <vector>

long long calculateCombination(int n, int r, std::vector<std::vector<long long>>& dp) {
    // 이미 계산한 값이 있다면 반환
    if (dp[n][r] != -1) {
        return dp[n][r];
    }

    if (r == 0 || n == r) {
        dp[n][r] = 1;
        return 1;
    }

    // 조합의 성질을 이용하여 동적 계획법으로 계산
    dp[n][r] = calculateCombination(n - 1, r - 1, dp) + calculateCombination(n - 1, r, dp);
    return dp[n][r];
}

int main() {
    int T;
    std::cin >> T;

    while (T-- > 0) {
        int N, M;
        std::cin >> N >> M;

        if (N < M) {
            std::swap(N, M);
        }

        // 동적 계획법을 위한 dp 배열 초기화
        std::vector<std::vector<long long>> dp(N + 1, std::vector<long long>(M + 1, -1));

        // 조합을 사용하여 순열의 개수 계산
        long long numPermutations = calculateCombination(N, M, dp);

        std::cout << numPermutations << std::endl;
    }

    return 0;
}
