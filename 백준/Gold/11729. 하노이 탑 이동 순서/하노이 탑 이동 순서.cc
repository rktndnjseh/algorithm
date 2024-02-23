#include <iostream>
using namespace std;

void hanoi(int n, int from, int by, int to) {
    if (n == 1) {
        cout << from << " " << to << "\n";
    }
    else {
        hanoi(n - 1, from, to, by);
        cout << from << " " << to << "\n";
        hanoi(n - 1, by, from, to);
    }
}
void cnt(int n) {
    int number = 1;
    while (--n) {
        number = number * 2 + 1;
    }
    cout << number << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cnt(n);
    hanoi(n, 1, 2, 3);
    return 0;
}