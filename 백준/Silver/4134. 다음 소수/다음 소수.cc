#include <iostream>
#include <cmath>
using namespace std;

bool prime(long long n) {
    if (n < 2) {
        return false;
    }
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        while (true) {
            if (prime(n)) {
                cout << n << "\n";
                break;
            }
            n++;
        }
    }

    return 0;
}
