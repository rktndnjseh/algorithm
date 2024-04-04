#include <iostream>
#include <queue>
#include <vector>
using namespace std;

priority_queue<int, vector<int>, greater<int>> minHeap;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; 
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x; 

        if (x == 0) {
            if (minHeap.empty()) {
                cout << "0\n";
            }
            else {
                cout << minHeap.top() << '\n';
                minHeap.pop();
            }
        }
        else {
            minHeap.push(x);
        }
    }

    return 0;
}
