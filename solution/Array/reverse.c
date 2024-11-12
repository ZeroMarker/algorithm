// linear list reverse
#include <stdio.h>

void trans(int a[], int len) {
    int i, temp;
    for (i = 0; i < len / 2; i++) {
        temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
    }
}
int main(void) {
    int a[] = {1, 3, 5, 6, 2, 7};
    int len = sizeof(a) / sizeof(a[0]);
    trans(a, len);
    int i;
    for (i = 0; i < len; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}