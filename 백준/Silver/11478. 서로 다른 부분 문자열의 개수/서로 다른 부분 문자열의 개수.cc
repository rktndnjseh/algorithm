#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    unordered_set<string> substrings;
    for (int i = 0; i < s.size(); i++) {
        string temp;
        for (int j = i; j < s.size(); j++) {
            temp += s[j];
            substrings.insert(temp);
        }
    }

    cout <<substrings.size();

    return 0;
}
