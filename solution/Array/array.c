// linear list insert && delete
#include <stdio.h>
#define MAX 100

int insert(int a[], int e, int loc, int size) {
    int i;
    int temp;
    for (i = loc - 1; i <= size; i++) {
        temp = a[i];
        a[i] = e;
        e = temp;
    }
}
int del(int a[], int loc, int n) {
    int i;
    for (i = loc - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
}
int main(void) {
    int a[MAX];
    int i;
    int n = 9;
    for (i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    int e = 4;
    int loc = 3;
    insert(a, e, loc, n);
    for (i = 0; i <= n; i++) {
        printf("%d\n", a[i]);
    }
    printf("\n");
    del(a, loc + 1, n);
    for (i = 0; i <= n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
