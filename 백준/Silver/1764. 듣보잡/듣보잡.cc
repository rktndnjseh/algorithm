#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    map<string, int> countMap;
    vector <string> man;

    for (int i = 0; i < N; i++) {
        string unheardMan;
        cin >> unheardMan;
        countMap[unheardMan]++;
    }
    for (int i = 0; i < M; i++) {
        string heardMan;
        cin >> heardMan;
        if (countMap[heardMan] == 1) {
            man.push_back(heardMan);
        }
    }
    sort(man.begin(), man.end());
    cout << man.size() << "\n";
    for (const auto& m : man) {
        cout << m << "\n";
    }
    return 0;
}
