#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string initialText;
    cin >> initialText;

    int numCommands;
    cin >> numCommands;

    stack<char> leftStack, rightStack;
    for (char c : initialText) {
        leftStack.push(c);
    }

    while (numCommands--) {
        char command;
        cin >> command;

        if (command == 'L') {
            if (!leftStack.empty()) {
                rightStack.push(leftStack.top());
                leftStack.pop();
            }
        }
        else if (command == 'D') {
            if (!rightStack.empty()) {
                leftStack.push(rightStack.top());
                rightStack.pop();
            }
        }
        else if (command == 'B') {
            if (!leftStack.empty()) {
                leftStack.pop();
            }
        }
        else if (command == 'P') {
            char c;
            cin >> c;
            leftStack.push(c);
        }
    }

    while (!leftStack.empty()) {
        rightStack.push(leftStack.top());
        leftStack.pop();
    }

    while (!rightStack.empty()) {
        cout << rightStack.top();
        rightStack.pop();
    }

    return 0;
}
