#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int cnt = 0; int K = 0; int result = - 1;
void merge(vector<int>& A, int p, int q, int r) {
    vector<int> tmp(r - p + 1);
    int i = p, j = q + 1, t = 0;

    while (i <= q && j <= r) {
        if (A[i] <= A[j]) {
            tmp[t++] = A[i++];
        }
        else {
            tmp[t++] = A[j++];
        }
    }

    while (i <= q) {
        tmp[t++] = A[i++];
    }

    while (j <= r) {
        tmp[t++] = A[j++];
    }

    for (i = p, t = 0; i <= r; ) {
        A[i++] = tmp[t++];
        cnt++;
        if (cnt == K) {
            result = A[i - 1];
            break;
        }
    }
}

void merge_sort(vector<int>& A, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N >> K;
    vector <int> A(N);

    for (int i = 0; i < N;i++) {
        cin >> A[i];
    }
    merge_sort(A, 0, A.size() - 1);
    cout << result;
    return 0;
}