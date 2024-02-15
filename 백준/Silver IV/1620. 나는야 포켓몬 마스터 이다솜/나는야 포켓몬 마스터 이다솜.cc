#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M; int num = 1;
    map <string, int> poketmon;
    map <int, string> name;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        poketmon.insert(make_pair(s, num));
        name.insert(make_pair(num++, s));
    }
    for (int i = 0; i < M; i++) {
        char ins[21];
        cin >> ins;
        if (isdigit(ins[0])) {
            int num = atoi(ins);
            cout << name[num] << '\n';
        }
        else
        {
            cout << poketmon[ins] << '\n';
        }
    }

    return 0;
}
