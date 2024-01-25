#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int sides[3] = { a, b, c };
    sort(sides, sides + 3); // sort는 시작 반복자와 끝 반복자를 인자로 받음

    if (sides[2] >= sides[0] + sides[1]) {
        sides[2] = sides[1] + sides[0] - 1;
    }
    cout << sides[0] + sides[1] + sides[2];

    return 0;
}
