#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int k;
	int* arr;
	scanf("%d", &k);
	arr = (int*)malloc(sizeof(int) * k);
	if(arr==NULL) {
		printf("메모리 할당 오류");
		return 1;
	}
	int cnt = 0;
	for (int i = 0; i < k; i++) {
		scanf("%d", &arr[cnt]);
		if (arr[cnt] == 0 && cnt > 0) {
			cnt--;
		}
		else if(arr[cnt]!=0) {
			cnt++;
		}
	}
	int sum = 0;
	for (int i = 0; i < cnt; i++) {
		sum += arr[i];
	}
	printf("%d", sum);

	free(arr);
	return 0;
}