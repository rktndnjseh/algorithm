#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(string a, string b) {
    if (a.length() != b.length()) 
        return a.length() < b.length();
     return a < b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<string>word;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        word.push_back(tmp);
    }
    sort(word.begin(), word.end(), cmp);
    word.erase(unique(word.begin(), word.end()), word.end());
    for (int i = 0; i < word.size(); i++) {
         cout << word[i] << endl;
    }

    return 0;
}