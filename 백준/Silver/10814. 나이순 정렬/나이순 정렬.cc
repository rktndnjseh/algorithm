#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Member {
    int age;
    string name;
};

bool compareMember(const Member& a, const Member& b) {
    return a.age < b.age;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<Member> members(N);

    for (int i = 0; i < N; i++) {
        cin >> members[i].age >> members[i].name;
    }

    stable_sort(members.begin(), members.end(), compareMember);

    for (int i = 0; i < N; i++) {
        cout << members[i].age << " " << members[i].name << "\n";
    }

    return 0;
}
