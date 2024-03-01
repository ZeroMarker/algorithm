#include <stdio.h>
#include <stdlib.h>

#include "bubble.h"
#include "print.h"

#define M 3

int main(void) {
    // int arr[M] = {1};
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("sizeof(arr) = %d\n", sizeof(arr));
    printf("%p\n", arr);

    arr[3] = 10;
    printf("arr[3] = %d\n", arr[3]);

    int len = sizeof(arr) / sizeof(arr[0]);
    print(arr, len);
    bubble(arr, len);
    print(arr, len);

    return 0;
}