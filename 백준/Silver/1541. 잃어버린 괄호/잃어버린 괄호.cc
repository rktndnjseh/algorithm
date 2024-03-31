#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int result = 0;
    bool minus = false;
    string num;
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == '-'|| s[i] == '+' || i == s.length()) {
            if (minus) {
                result -= stoi(num);
                num = "";
            }
            else if (minus==false) {
                result += stoi(num);
                num = "";
            }
        }
        else {
            num += s[i];
        }
        if (s[i] == '-') {
            minus = true;
        }
    }
    cout << result;
    return 0;
}
