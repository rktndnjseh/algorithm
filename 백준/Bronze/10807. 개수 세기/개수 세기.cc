#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,v;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n;i++) {
        cin >> arr[i];
    }
    cin >> v;
    cout<<count(arr, arr + n, v);

    return 0;
}
