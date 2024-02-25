#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> nums(N + 1, 0);
    vector<int> prefix_sum(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        cin >> nums[i];
        prefix_sum[i] = prefix_sum[i - 1] + nums[i];
    }

    for (int i = 0; i < M; i++) {
        int start, end;
        cin >> start >> end;
        cout << prefix_sum[end] - prefix_sum[start - 1] << "\n";
    }

    return 0;
}
