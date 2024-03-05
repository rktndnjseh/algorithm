#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Queue[2000000];
int Front = -1, Rear = -1;

void push(int data) {
	Queue[++Rear] = data;
}

void pop() {
	Front++;
}

int front() {
	return Queue[Front + 1];
}

int back() {
	return Queue[Rear];
}

int size() {
	return Rear - Front;
}

int empty() {
	return Front == Rear ? 1 : 0;
}

int main() {
	int x;
	char order[6];
	int n;
	scanf("%d", &n);

	while (n--) {
		scanf("%s", order);
		if (strcmp(order, "push") == 0) {
			scanf("%d", &x);
			push(x);
		}
		else if (strcmp(order, "pop") == 0) {
			if (empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", front());
				pop();
			}
		}
		else if (strcmp(order, "size") == 0) {
			printf("%d\n", size());
		}
		else if (strcmp(order, "empty") == 0) {
			if (empty()) {
				printf("1\n");
			}
			else {
				printf("0\n");
			}
		}
		else if (strcmp(order, "front") == 0) {
			if (empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", front());
			}
		}
		else if (strcmp(order, "back") == 0) {
			if (empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", back());
			}
		}
	}
	return 0;
}
