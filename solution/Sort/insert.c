#include <stdio.h>

void insert(int a[], int len) {
    int i;
    for (i = 0; i < len; i++) {
        int pre = i - 1;
        int temp = a[i];
        while (pre >= 0 && a[pre] > temp) {
            a[pre + 1] = a[pre];
            pre--;
        }
        a[pre + 1] = temp;
    }
    for (i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
}
int main(void) {
    int a[] = {5, 6, 2, 4, 9, 1};
    int len = sizeof(a) / sizeof(a[0]);
    insert(a, len);
    return 0;
}