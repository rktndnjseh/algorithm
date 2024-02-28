#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a,b;
   cin >> a >> b;

   cout << fixed;
   cout.precision(9);
    cout <<a/b;
    
    return 0;
}
