#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;
    stack<int>s;
    int n;
    cin >> n;
    int order;
    for (int i = 0; i < n; i++) {
        cin >> order;
        switch (order)
        {
        case 1:
            std::cin >> x;
            s.push(x);
            break;
        case 2:
            if (!s.empty()) {
                cout << s.top() << "\n";
                s.pop();
            }
            else
                std::cout << -1 << "\n";
            break;
        case 3:
            std::cout << s.size() << "\n";
            break;
        case 4:
            if (s.empty())
                std::cout << 1 << "\n";
            else std::cout << 0 << "\n";
            break;
        case 5:
            if (!s.empty())
                std::cout << s.top() << "\n";
            else
                std::cout << -1 << "\n";
            break;
        }
    }

    return 0;
}
