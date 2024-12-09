// linear list stack in && out
#include <stdio.h>
#define MAX 10

int push(int a[], int e, int top) {
    if (top + 1 == MAX) {
        printf("overflow");
        return 0;
    } else {
        a[top++] = e;
        return top;
    }
}
int pop(int a[], int top) {
    if (top == 0) {
        printf("empty\n");
        return 0;
    } else {
        printf("%d", a[--top]);
        return top;
    }
}
int main(void) {
    int a[MAX];
    int top = 0, bottom = 0;
    top = push(a, 12, top);
    top = push(a, 45, top);
    top = pop(a, top);
    return 0;
}
