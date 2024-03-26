#include <iostream>
using namespace std;

int main() {
    int A, B;
    int input_minute;
    cin >> A >> B;
    cin >> input_minute;
    B += input_minute;
    int n = B / 60;
    A += n;
    A = A % 24;
    B = B % 60;
    cout << A << " " << B;

    return 0;
}