#include <iostream>
#include <cstring>
using namespace std;

int recursion(const char* s, int l, int r, int& cnt) { 
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1, cnt);  
}

int isPalindrome(const char* s, int& cnt) {  
    return recursion(s, 0, strlen(s) - 1, cnt);  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    string s;
    while (T-- > 0) {
        int cnt = 0;  
        cin >> s;
        cout << isPalindrome(s.c_str(), cnt) << " " << cnt << endl; 
    }

    return 0;
}
