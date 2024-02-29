#include <iostream>

using namespace std;

void insertion_sort(int list[], int n) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = list[i];

        for (j = i - 1; j >= 0 && list[j] > key; j--) {
            list[j + 1] = list[j];
        }

        list[j + 1] = key;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[3];
    
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    insertion_sort(a, 3);

    for (int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }
    return 0;
}