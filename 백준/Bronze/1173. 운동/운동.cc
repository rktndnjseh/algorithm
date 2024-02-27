#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, m, M, T, R;
    cin >> N >> m >> M >> T >> R;

    if (m + T > M) {
        cout << -1 << "\n";
        return 0;
    }

    int pulse = m;
    int exerciseMinutes = 0;
    int totalMinutes = 0;

    while (exerciseMinutes < N) {
        if (pulse + T <= M) {
            pulse += T;
            exerciseMinutes++;
        } else {
            pulse -= R;
            if (pulse < m) pulse = m;
        }
        totalMinutes++;
    }

    cout << totalMinutes << "\n";

    return 0;
}