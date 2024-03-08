#include <iostream>
using namespace std;

void printLong(int n) {
    if (n <= 0) {
        cout << "int";
        return;
    }      
        
    cout << "long ";
    printLong(n - 1);
}

int main() {
    int N;
    cin >> N;
    printLong(N / 4);

    return 0;
}
