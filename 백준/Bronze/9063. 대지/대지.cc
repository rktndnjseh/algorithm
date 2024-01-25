#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int* x = new int[N];
    int* y = new int[N];
    int y_min = 10001;
    int y_max = -10001;
    int x_min = 10001;
    int x_max = -10001;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < N; i++) {
        if (x_min>x[i]) {
            x_min = x[i];
        }
        if (x_max < x[i]) {
            x_max = x[i];
        }
        if (y_min > y[i]) {
            y_min = y[i];
        }
        if (y_max < y[i]) {
            y_max = y[i];
        }
    }
    cout << (x_max - x_min)*(y_max-y_min);

    delete[] x;
    delete[] y;

    return 0;
}