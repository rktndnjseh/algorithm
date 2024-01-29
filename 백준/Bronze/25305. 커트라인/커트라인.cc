#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int *scores = new int [N];
    for (int i = 0; i < N; i++) {
        cin >> scores[i];
    }
    sort(scores, scores + N, greater<int>());
    int cutline = scores[K-1];

    cout << cutline;
    delete[] scores;
    return 0;
}
