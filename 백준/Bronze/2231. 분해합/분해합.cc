#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int start = N;
    int temp = N;
    while (temp > 0) {
        start -= 9;
        temp /= 10;
    }
    if (start <= 0) start = 0;

    for (int i = start; i < N; ++i) {
        int sum = i;
        temp = i;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (N == sum) {
            cout << i;
            return 0;
        }
    }

    cout << 0;
    return 0;
}
