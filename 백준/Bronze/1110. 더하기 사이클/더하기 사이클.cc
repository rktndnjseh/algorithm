#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int original = N;
    int cycleLength = 0;

    do {
        int sum = (N / 10) + (N % 10);
        N = (N % 10) * 10 + (sum % 10);
        cycleLength++;
    } while (original != N);

    cout << cycleLength << "\n";

    return 0;
}
