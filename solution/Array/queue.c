// loop queue in && out
#include <stdio.h>
#define MAX 10

int push(int a[], int e, int front, int rear) {
    if ((rear + 1) % MAX == front) {
        printf("overflow");
        return;
    } else {
        a[rear++] = e;
    }
}
int pop(int a[], int front, int rear) {
    if (rear = front) {
        printf("empty");
        return;
    } else {
        return a[front++];
    }
}
int main(void) {
    int a[MAX];
    int e;
    int front = 0, rear = 0;
    push(a, 12, front, rear);
    push(a, 3, front, rear);
    e = pop(a, front, rear);
    printf("%d", e);
    return 0;
}
