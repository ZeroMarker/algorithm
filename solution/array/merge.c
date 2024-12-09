// merge linear list
#include <stdio.h>

void merge(int a[], int L1, int b[], int L2, int c[]) {
    int i = 0, j = 0;
    int k = 0;
    while (i <= L1 && j <= L2) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
}
int main(void) {
    int a[] = {1, 3, 5, 7}, b[] = {2, 4, 6, 8};
    int La = sizeof(a) / sizeof(a[0]);
    int Lb = sizeof(b) / siz~eof(b[0]);
    int i;
    int c[La + Lb];
    merge(a, La, b, Lb, c);
    for (i = 0; i < La + Lb; i++) {
        printf("%d\t", c[i]);
    }
    return 0;
}