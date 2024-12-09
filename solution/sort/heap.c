#include <stdio.h>

int a[] = {5, 4, 43, 66, 22, 66, 32, 33};
int len = sizeof(a) / sizeof(a[0]);

int buildMaxHeap(int arr[]) {
    int i;
    for (i = len / 2; i >= 0; i--) {
        heapify(arr, i);
    }
}

int heapify(int arr[], int i) {
    int left = 2 * i + 1, right = 2 * i + 2, largest = i;

    if (left < len && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < len && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr, i, largest);
        heapify(arr, largest);
    }
}

int swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int* heapSort(int arr[]) {
    buildMaxHeap(arr);
    int i;
    for (i = len - 1; i > 0; i--) {
        swap(arr, 0, i);
        len--;
        heapify(arr, 0);
    }
    return arr;
}
int print(int a[], int len) {
    int k;
    for (k = 0; k < len; k++) {
        printf("%d ", a[k]);
    }
}
int main(void) {
    int lens = len;
    heapSort(a);
    print(a, lens);
    return 0;
}