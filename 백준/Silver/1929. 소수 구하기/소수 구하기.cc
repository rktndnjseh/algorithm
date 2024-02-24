#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<bool> prime(long long n) {
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    long long rootN = sqrt(n);
    for (long long i = 2; i <= rootN; i++) {
        if (sieve[i]) {
            for (long long j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }
    return sieve;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long M, N;
    cin >> M >> N;
    vector<bool> sieve = prime(N);

    for (long long i = M; i <= N; i++) {
        if (sieve[i]) {
            cout << i << "\n";
        }
    }
        
    
    return 0;
}
