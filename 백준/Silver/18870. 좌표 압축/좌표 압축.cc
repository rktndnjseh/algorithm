#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    vector<int> sorted_arr(arr);
    sort(sorted_arr.begin(), sorted_arr.end());

    unordered_map<int, int> hashmap;
    int idx = 0;
    for (int i = 0; i < N; i++) {
        if (hashmap.count(sorted_arr[i]) == 0) {
            hashmap[sorted_arr[i]] = idx++;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << hashmap[arr[i]] << ' ';
    }

    return 0;
}