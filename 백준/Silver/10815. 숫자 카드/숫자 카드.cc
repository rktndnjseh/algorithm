#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, temp;
    map<int, int> cards;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        cards[temp] = 1;
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> temp;
        if (cards[temp] == 1) {
            cout << "1 ";
        }
        else {
            cout << "0 ";
        }
    }

    return 0;
}
