#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N;
    map<int, int> countMap;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        countMap[num]++;
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        int tmp;
        cin >> tmp;
        cout << countMap[tmp] << " ";
    }
    return 0;
}
