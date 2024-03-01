#include <iostream>
#include <vector>
using namespace std;

int dp[1000001];
int trace[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    for (int i = 2; i <= x; i++) {
        dp[i] = dp[i - 1] + 1;
        trace[i] = i - 1;
        if (i % 2 == 0 && dp[i] > dp[i / 2] + 1) {
            dp[i] = dp[i / 2] + 1;
            trace[i] = i / 2;
        }
        if (i % 3 == 0 && dp[i] > dp[i / 3] + 1) {
            dp[i] = dp[i / 3] + 1;
            trace[i] = i / 3;
        }
    }

    cout << dp[x] << "\n";

    vector<int> steps;
    for (int i = x; i != 0; i = trace[i]) {
        steps.push_back(i);
    }
    for (int i = 0; i <= steps.size() - 1; i++) {
        cout << steps[i] << " ";
    }

    return 0;
}
