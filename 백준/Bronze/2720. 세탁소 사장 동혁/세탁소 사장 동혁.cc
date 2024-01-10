#include <iostream>
using namespace std;

int coinCount(int& C, int englandMoney) {
    int count = C / englandMoney;
    C %= englandMoney;
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T,C;
    int englandMoney[] = { 25, 10, 5, 1 };
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> C;
        for (int j = 0; j < 4; j++) {
            cout << coinCount(C, englandMoney[j]) << " ";
        }
        cout << endl;
    }
    return 0;
}
