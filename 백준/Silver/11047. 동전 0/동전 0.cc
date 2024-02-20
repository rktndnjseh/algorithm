#include <iostream>
using namespace std;
int a[11];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = n-1; i >= 0 ; i--)
    {
        sum += k / a[i];
        k %= a[i];
    }
    cout << sum << endl;

    return 0;
}
