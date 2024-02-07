#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    unordered_set<string>S;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        S.insert(tmp);
    }
    int count = 0;
    for (int i = 0; i < m; i++) {
        string tmp;
        cin >> tmp;
        if (S.find(tmp) != S.end()) {
            count++;
        }
    }
    cout << count;
    return 0;
}