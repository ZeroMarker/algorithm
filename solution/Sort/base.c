#include <stdio.h>
#define MAX 20
#define BASE 10

void print(int *a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}

void radixsort(int *a, int n) {
    int i, b[MAX], m = a[0], exp = 1;

    for (i = 1; i < n; i++) {
        if (a[i] > m) {
            m = a[i];
        }
    }

    while (m / exp > 0) {
        int bucket[BASE] = {0};

        for (i = 0; i < n; i++) {
            bucket[(a[i] / exp) % BASE]++;
        }

        for (i = 1; i < BASE; i++) {
            bucket[i] += bucket[i - 1];
        }

        for (i = n - 1; i >= 0; i--) {
            b[--bucket[(a[i] / exp) % BASE]] = a[i];
        }

        for (i = 0; i < n; i++) {
            a[i] = b[i];
        }

        exp *= BASE;
    }
}

int main() {
    int arr[MAX];
    int i, n;

    printf("input total elements : ", MAX);
    scanf("%d", &n);
    n = n < MAX ? n : MAX;

    printf("input %d Elements : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    radixsort(&arr[0], n);

    printf("\nresult: ");
    print(&arr[0], n);
    printf("\n");

    return 0;
}