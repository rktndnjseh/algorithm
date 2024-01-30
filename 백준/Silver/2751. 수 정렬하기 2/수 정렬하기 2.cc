#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

long long num[1000000];

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%lld", &num[i]);
    }

    sort(num, num + N);

    for (int i = 0; i < N; i++) {
        printf("%lld\n", num[i]);
    }

    return 0;
}
