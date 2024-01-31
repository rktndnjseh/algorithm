#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    int array[10001] = { 0, };
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        array[num]++;
    }

    for (int i = 0; i <= 10000; i++) {
        for (int j = 0; j < array[i]; j++) {
            printf("%d\n", i);
        }
    }

    return 0;
}
