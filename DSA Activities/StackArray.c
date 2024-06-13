#include "StackArray.h"

bool isEmpty(StackArrayList s) {
    return s.top == -1;
}

bool isFull(StackArrayList s) {
    return s.top == MAX - 1;
}

void initStack(StackArrayList *s) {
    s->top = -1;
}

StackArrayList createStack() {
    StackArrayList s;
    initStack(&s);
    return s;
}

bool stack_push(StackArrayList *s, int elem) {
    if (isFull(*s))
        return false;
    s->data[++(s->top)] = elem;
    return true;
}

bool stack_pop(StackArrayList *s) {
    if (isEmpty(*s))
        return false;
    s->top--;
    return true;
}

bool stack_peek(StackArrayList *s) {
    if (isEmpty(*s))
        return false;
    return true;
}

void display(StackArrayList s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack: ");
    for (int i = 0; i <= s.top; i++) {
        printf("%d ", s.data[i]);
    }
    printf("\n");
}

void visualize(StackArrayList s) {
    printf("Top: %d\n", s.top);
    for (int i = 0; i < MAX; i++) {
        if (i > s.top)
            printf("[   ]\n");
        else
            printf("[%2d]\n", s.data[i]);
    }
}

StackArrayList extractEvenNumbers(StackArrayList *original) {
    StackArrayList evenStack;
    initStack(&evenStack);

    while (!isEmpty(*original)) {
        int element = original->data[original->top];
        stack_pop(original);

        if (element % 2 == 0) {
            stack_push(&evenStack, element);
        }
    }

    return evenStack;
}


