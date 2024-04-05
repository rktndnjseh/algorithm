#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int apartment(int k, int n) {
	if (k == 0) {
		return n;
	}
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum+= apartment(k - 1, i);
	}
	return sum;
}
int main() {
	int T;
	int k, n;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &k);
		scanf("%d", &n);
;
		printf("%d\n", apartment(k, n));
	}

	return 0;
}