#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    string name, attendance;
    map<string, string, greater<string>> member;

    for (int i = 0; i < N; i++) {
        cin >> name >> attendance;
        if (attendance == "enter") member.insert(make_pair(name, attendance));
        else member.erase(name);
    }
    for (auto it : member) {
        cout << it.first << "\n";
    }
    return 0;
}
