#include "bubble.h"

#include <stdio.h>

int bubble(int* arr, int size) {
    int len = sizeof(arr) / sizeof(int);
    /*
    The sizeof(arr) inside the function will not give you the actual length of
    the array; instead, it will give you the size of the pointer.
    */
    /*
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    */
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}