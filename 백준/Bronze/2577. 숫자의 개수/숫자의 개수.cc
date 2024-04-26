#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int sum = A * B * C;
    string s = to_string(sum);

    const int MAX_DIGITS = 10;
    int cnt[MAX_DIGITS] = { 0 }; 

    for (char digit : s) {
        int d = digit - '0'; 
        cnt[d]++;
    }

    for (int i = 0; i < MAX_DIGITS; i++) {
            cout << cnt[i] <<"\n";
    }

    return 0;
}
