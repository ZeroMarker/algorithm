#include <math.h>
#include <stdio.h>
#define MAX 10

int input() {
    int a[MAX];
    int i = 0, c = 0;
    char ch = ' ';  // Initialize ch to avoid undefined behavior
    for (i = 0; i < MAX && ch != '\n'; i++) {
        scanf("%d", &a[i]);
        ch = getchar();
        c++;
    }
    for (i = 0; i < c; i++) {
        printf("%d ", a[i]);
    }
    return c;
}

int count(int length) {
    int k = floor(log(length) / log(2)) + 1;
    printf("%d\n", k);  // Add a newline character for better formatting
    int m0 = 0;
    int m1 = 0;
    int m2 = 0;
    int i;
    for (i = (int)pow(2, (k - 2)); i <= (int)(pow(2, (k - 1)) - 1); i++) {
        if (i * 2 > length) {
            m0 = m0 + 1;
        } else if (i * 2 + 1 <= length) {
            m2 = m2 + 1;
        } else {
            m1 = m1 + 1;
        }
    }
    return (2 * m2 + m1 + m0);
}

int main(void) {
    int length;
    length = input();
    printf("%d \n", count(length));
    return 0;
}
