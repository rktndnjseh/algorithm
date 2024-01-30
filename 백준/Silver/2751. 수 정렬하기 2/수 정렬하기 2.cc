#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> array(N);
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    sort(array.begin(), array.end());

    for (int i = 0; i < N; i++) {
        cout << array[i] << '\n';
    }

    cout.flush();

    return 0;
}
