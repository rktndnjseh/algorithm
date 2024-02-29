#include <iostream>

using namespace std;

void bubble_sort(int list[], int n) {
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (list[j] < list[j + 1]) {
                swap(list[j], list[j + 1]);
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[3];
    
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    bubble_sort(a, 3);

    for (int i = 2; i >= 0; i--) {
        cout << a[i] << " ";
    }
    return 0;
}