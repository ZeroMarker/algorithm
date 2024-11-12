// linear list substring
#include <stdio.h>
#include <string.h>
#define MAX 100
#define ERROR 0

char *substr(char *a, char *b, int m, int n) {
    if (m > strlen(a) || (m + n) > strlen(a) || m < 0 || n < 0) {
        return ERROR;
    }
    int j = 0;
    int i;
    for (i = m - 1; i < (m + n); i++) {
        b[j] = a[i];
        j++;
    }
}
int main(void) {
    char a[MAX] = "Hello, C Language world!";
    char b[MAX];
    int m = 4, n = 3, i = 1;
    substr(&a[0], &b[0], m, n);
    printf("%s", b);
    return 0;
}
