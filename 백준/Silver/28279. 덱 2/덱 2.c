#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100000
#define LM 1000002

typedef struct {
    int v;
    int prev;
    int next;
} Deque;

Deque DEQUE[LM];
int idx, size;
int head, tail;

void init_deque() {
    head = idx++;
    tail = idx++;
    DEQUE[head].next = tail;
    DEQUE[tail].prev = head;
}

int is_empty() {
    return (DEQUE[head].next == tail);
}

void add_front(int x) {
    int node = idx++;
    DEQUE[node].v = x;
    DEQUE[node].next = DEQUE[head].next;
    DEQUE[node].prev = head;
    DEQUE[DEQUE[head].next].prev = node;
    DEQUE[head].next = node;
    ++size;
}

void add_rear(int x) {
    int node = idx++;
    DEQUE[node].v = x;
    DEQUE[node].next = tail;
    DEQUE[node].prev = DEQUE[tail].prev;
    DEQUE[DEQUE[tail].prev].next = node;
    DEQUE[tail].prev = node;
    ++size;
}

int delete_front() {
    if (is_empty()) return -1;
    int node = DEQUE[head].next;
    int value = DEQUE[node].v;
    DEQUE[DEQUE[node].next].prev = head;
    DEQUE[head].next = DEQUE[node].next;
    --size;
    return value;
}

int delete_rear() {
    if (is_empty()) return -1;
    int node = DEQUE[tail].prev;
    int value = DEQUE[node].v;
    DEQUE[DEQUE[node].prev].next = tail;
    DEQUE[tail].prev = DEQUE[node].prev;
    --size;
    return value;
}

int get_front() {
    if (is_empty()) return -1;
    return DEQUE[DEQUE[head].next].v;
}

int get_rear() {
    if (is_empty()) return -1;
    return DEQUE[DEQUE[tail].prev].v;
}

int get_size() {
    return size;
}

int main() {
    init_deque();
    int n, o, x;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &o);
        switch (o) {
        case 1:
            scanf("%d", &x);
            add_front(x);
            break;
        case 2:
            scanf("%d", &x);
            add_rear(x);
            break;
        case 3:
            printf("%d\n", delete_front());
            break;
        case 4:
            printf("%d\n", delete_rear());
            break;
        case 5:
            printf("%d\n", get_size());
            break;
        case 6:
            printf("%d\n", is_empty());
            break;
        case 7:
            printf("%d\n", get_front());
            break;
        case 8:
            printf("%d\n", get_rear());
            break;
        }
    }
    return 0;
}
