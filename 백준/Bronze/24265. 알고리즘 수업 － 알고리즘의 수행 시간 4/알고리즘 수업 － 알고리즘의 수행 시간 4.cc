#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum = (n - 1) * n / 2;
    cout << sum << endl; // 코드1의 수행 횟수
    cout << 2 << endl;   // 최고차항의 차수
    return 0;
}