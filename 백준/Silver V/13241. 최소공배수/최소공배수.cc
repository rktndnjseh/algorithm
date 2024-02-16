#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a, b;
    cin >> a >> b;

    long long int g = gcd(a, b);
    long long int lcm = a * b / g;

    cout << lcm;

    return 0;
}
