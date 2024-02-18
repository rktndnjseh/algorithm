#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> tree(n);

    for (int i = 0; i < n; i++) {
        cin >> tree[i];
    }
    sort(tree.begin(), tree.end());

    int resultGcd = tree[1] - tree[0];
    int count = 0;

    for (int i = 1; i < n - 1; i++) {
        int distance = tree[i + 1] - tree[i];
        resultGcd = gcd(resultGcd, distance);
    }

    for (int i = 0; i < n - 1; i++) {
        count += ((tree[i + 1] - tree[i]) / resultGcd) - 1;
    }

    cout << count;

    return 0;
}
