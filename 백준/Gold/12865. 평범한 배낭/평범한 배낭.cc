#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    int W, V;
    cin >> N >> K;

    vector<pair<int, int>> arr;

    for (int i = 0; i < N; i++) {
        cin >> W >> V;
        arr.push_back(make_pair(W, V));
    }

    vector<int> d(K + 1, 0);


    for (auto& it : arr) {
        for (int i = K; i > it.first - 1; i--) {
            d[i] = max(d[i], d[i - it.first] + it.second);
        }
    }
    cout << d[K];

    return 0;
}