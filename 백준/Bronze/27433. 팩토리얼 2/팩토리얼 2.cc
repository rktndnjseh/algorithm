#include <iostream>
using namespace std;

long long factorial(long long n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(static_cast<long long>(n) - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    cout << factorial(n);
    
    return 0;
}
