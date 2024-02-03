#include <iostream>
#include <algorithm>
using namespace std;

struct Point {
    int x;
    int y;
};

bool compare(const Point& a, const Point& b) {
    if (a.x != b.x) {
        return a.x < b.x;
    }
    return a.y < b.y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    Point* pos = new Point[100000];

    for (int i = 0; i < n; i++) {
        cin >> pos[i].x >> pos[i].y;
    }

    sort(pos, pos + n, compare);

    for (int i = 0; i < n; i++) {
        cout << pos[i].x << ' ' << pos[i].y << '\n';
    }

    delete[] pos;

    return 0;
}
