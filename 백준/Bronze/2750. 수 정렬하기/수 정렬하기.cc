#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int N;
    cin >> N;
    vector<int> array(N);
    unordered_map<int, int> cnt;

    for (int i = 0; i < N; i++) {
        cin >> array[i];
        cnt[array[i]]++;
    }

    sort(array.begin(), array.end());
    array.erase(unique(array.begin(), array.end()), array.end());

    for (int num : array) {
        if (cnt[num] == 1) {
            cout << num << '\n';
        }
    }

    return 0;
}
