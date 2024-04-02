#include <iostream>
#include <vector>
using namespace std;

void eratosthenes(int n) {
    vector<bool> prime(2 * n+1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= 2*n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <=2 * n; j += i) {
                prime[j] = false;
            }
        }
    }
    int cnt = 0;
    for (int i = n+1; i <= 2 * n; i++) {
        if (prime[i])cnt++;
    }
    cout << cnt << endl;
}
int main() {
    while (true) {
        int n = 0;
        cin >> n;
        if (n == 0)break;
        eratosthenes(n);
    }
    return 0;
}