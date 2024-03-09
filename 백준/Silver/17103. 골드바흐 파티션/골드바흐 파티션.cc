#include <iostream>
#include <vector>
using namespace std;

vector<bool> is_prime(1000001, true);

void goldbergh(int n) {
    int cnt = 0;
    for (int i = 2; i <= n / 2; i++) {
        if (is_prime[i] && is_prime[n - i]) {
            cnt++;
        }
    }
    cout << cnt << "\n";
}

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= 1000000; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= 1000000; j += i)
                is_prime[j] = false;
        }
    }
}

int main() {
    int T, N;
    cin >> T;
    sieve();
    for (int i = 0; i < T; i++) {
        cin >> N;
        goldbergh(N);
    }
    return 0;
}
