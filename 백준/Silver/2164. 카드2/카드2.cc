#include <iostream>
using namespace std;

int main() {
    int n;
    int t = 2;
    cin >> n;
    while (true) {
        if (n == 1 or n == 2) {
            cout << n;
            break;
        }
        t *= 2;
        if (t >= n) {
            cout << ((n - (t / 2)) * 2);
            break;
        }
    }
    return 0;
}
