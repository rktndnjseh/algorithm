#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isBalanced(string str) {
    stack<char> s;
    for (char c : str) {
        if (c == '(' || c == '[') {
            s.push(c);
        }
        else if (c == ')' || c == ']') {
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            s.pop();
            if ((c == ')' && top != '(') || (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string str;
    while (true) {
        getline(cin, str);
        if (str == ".") {
            break;
        }
        if (isBalanced(str)) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }
    return 0;
}
