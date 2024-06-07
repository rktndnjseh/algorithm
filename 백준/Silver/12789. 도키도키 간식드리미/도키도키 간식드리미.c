#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define max_size 1000

typedef int boolean;
typedef struct StackType {
    int stack[max_size];
    int top;
} StackType;

void stack_init(StackType* s) {
    s->top = -1;
}

void stack_push(StackType* s, int data) {
    if (s->top < max_size - 1) {
        s->stack[++(s->top)] = data;
    }
    else {
    }
}

boolean is_empty(StackType* s) {
    return s->top == -1;
}

int stack_pop(StackType* s) {
    if (!is_empty(s)) {
        int t = s->stack[s->top];
        s->top--;
        return t;
    }
    else {
        return -1; // Return a sentinel value indicating error
    }
}

int peek(StackType* s) {
    if (is_empty(s)) {
        return -1; // Return a sentinel value indicating error
    }
    else {
        return s->stack[s->top];
    }
}

boolean is_full(StackType* s) {
    return s->top == max_size - 1;
}

int main() {
    int n;
    scanf("%d", &n);

    StackType s;
    stack_init(&s);

    int input[max_size];
    for (int i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    int expected = 1;
    for (int i = 0; i < n; i++) {
        stack_push(&s, input[i]);

        while (!is_empty(&s) && peek(&s) == expected) {
            stack_pop(&s);
            expected++;
        }
    }

    if (is_empty(&s)) {
        printf("Nice\n");
    }
    else {
        printf("Sad\n");
    }

    return 0;
}
