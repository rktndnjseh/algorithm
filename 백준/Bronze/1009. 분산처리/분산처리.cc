#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b;
    int sum;
    for (int i = 0; i < n;i++) {
        sum = 1;
        cin >> a >> b;
        for (int j = 0; j < b; j++) {
            sum = (sum*a)%10;
        }
        if (sum == 0)sum = 10;
        cout << sum <<"\n";
    }
    
    return 0;
}
