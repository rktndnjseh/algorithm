#include <iostream>
#include <vector>

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
    int T;
    cin >> T;
    vector<int> A(T);
    vector<int> B(T);
    vector<int> lcm(T);
    for (int i = 0; i < T; i++) {
        cin >> A[i] >> B[i];
        int gcd_value = gcd(A[i], B[i]);
        lcm[i] = (A[i] * B[i]) / gcd_value;
    }
    for (int i = 0; i < T; i++) {
        cout << lcm[i] << "\n";
    }

    return 0;
}
