#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int *cardsNum = new int [N];
    for (int i = 0; i < N; i++) {
        cin >> cardsNum[i];
    }
    sort(cardsNum, cardsNum + N);

    int maxSum = 0;
    for (int i = 0; i < N-2; i++) {
        for (int j = i+1; j < N-1; j++) {
            for (int k = j+1; k < N; k++) {
                int tempSum = cardsNum[i] + cardsNum[j] + cardsNum[k];
                if (tempSum <= M) {
                    maxSum = max(maxSum, tempSum);
                }
            }
        }
    }
    cout << maxSum;
    delete [] cardsNum;
    return 0;
}
