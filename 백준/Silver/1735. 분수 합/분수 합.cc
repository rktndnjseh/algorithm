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

    int A, B, C, D;

    cin >> A >> B >> C >> D;

    int upstair = A * D + B * C;

    int downstair = B * D;

    int g = gcd(upstair, downstair);

    upstair /= g;

    downstair /= g;

    cout<<upstair<<" "<<downstair;

    return 0;

}