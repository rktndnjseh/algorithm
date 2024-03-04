#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Stack[1000000];
int Top = -1;

void push(int data) {
	Stack[++Top] = data;
}

void pop() {
	if (Top != -1) {
		printf("%d\n", Stack[Top]);
		Top--;
	}
	else {
		printf("-1\n");
	}
}

int size() {
	return Top + 1;
}

void empty() {
	if (Top == -1) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}

void top() {
	if (Top != -1) {
		printf("%d\n", Stack[Top]);
	}
	else {
		printf("-1\n");
	}
}

int main() {
	int x;
	int order;
	int n;
	scanf("%d", &n);

	while (n--) {
		scanf("%d", &order);
		switch (order) {
		case 1:
			scanf("%d", &x);
			push(x);
			break;
		case 2:
			pop();
			break;
		case 3:
			printf("%d\n", size());
			break;
		case 4:
			empty();
			break;
		case 5:
			top();
			break;
		}
	}
	return 0;
}
