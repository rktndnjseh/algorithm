#include <iostream>
#include <algorithm>
using namespace std;

char board[50][50];
char whiteFirst[2] = { 'W', 'B' };
char blackFirst[2] = { 'B', 'W' };

int recolorCount(int x, int y, char firstColor[2]) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[x + i][y + j] != 
                firstColor[(i + j) % 2]
                //짝수일때는 0 홀수일때는 1
                ) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
        }
    }
    int minCount = 64;
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            minCount = min(minCount, min(recolorCount(i, j, whiteFirst), recolorCount(i, j, blackFirst)));
        }
    }
    cout << minCount;
    return 0;
}