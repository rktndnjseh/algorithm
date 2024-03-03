#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>>I(n);
    for (int i = 0; i < n; i++) {
        cin >> I[i].second >> I[i].first;
        }
    sort(I.begin(), I.end()); // 끝나는 시간을 기준으로 정렬

    int time = I[0].first;
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (time <= I[i].second)
        {
            cnt++;
            time = I[i].first;
        }
    }

    cout << cnt;
    return 0;
}
