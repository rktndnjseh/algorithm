#include <iostream>
using namespace std;

int fibonachi(int n) {
    if (n == 0) { return 0; }
    if (1<= n && n <= 2)
        return 1;
    else
        return fibonachi(n-1) + fibonachi(n-2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; 
    cout << fibonachi(n);
    
    return 0;
}
