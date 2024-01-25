#include <iostream>
using namespace std;

int main() {
    int a1, a0;
    int c, n0;
    //a0가 음수일때
    //a1*n -a0<=c*n
    //a1<=(c + a0 / n0)
    cin >> a1 >> a0 >> c >> n0;
        if (a1* n0 + a0 <= c * n0 && a1<=c) {
            cout << 1;
        }
        else {
            cout << 0;
        }

    return 0;
}