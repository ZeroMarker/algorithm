#include "print.h"

#include <stdio.h>

int print(int* arr, int size) {
    int len = sizeof(arr) / sizeof(int);
    /*
    The sizeof(arr) inside the function will not give you the actual length of
    the array; instead, it will give you the size of the pointer.
    */
    for (int i = 0; i < size; i++) {
        printf("%p -> %d\n", &arr[i], arr[i]);
    }
    printf("\n");
    return 0;
}