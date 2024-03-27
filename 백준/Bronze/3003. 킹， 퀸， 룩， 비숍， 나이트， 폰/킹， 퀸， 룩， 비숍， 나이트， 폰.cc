#include <iostream>
using namespace std;

int main() {
    int requiredPieces[] = {1,1,2,2,2,8};
    int inputPieces[6];
    for (int i = 0; i < 6; i++) {
        cin >> inputPieces[i];
    }
    for (int i = 0; i < 6; i++) {
        int diff = requiredPieces[i] - inputPieces[i];
        cout << diff << " ";
    }
    return 0;
}