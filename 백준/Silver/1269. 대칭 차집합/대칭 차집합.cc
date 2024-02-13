#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int aN, bN;
    cin >> aN >> bN;

    map<int, int> countMap;

    for (int i = 0; i < aN; i++) {
        int num;
        cin >> num;
        countMap[num]++;
    }

    for (int i = 0; i < bN; i++) {
        int num;
        cin >> num;
        countMap[num]--;
    }

    int count = 0;
    for (auto it = countMap.begin(); it != countMap.end(); ++it) {
        count += abs(it->second);
    }

    cout << count;

    return 0;
}
