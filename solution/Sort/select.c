#include <stdio.h>

void selectsort(int a[], int la) {
	int i, k;
	int min;
	for(i = 0; i < la; i++) {
		min = i;
		for(k = i + 1; k < la; k++) {
			if(a[min]>a[k]){
				min = k;
			}
		}
		int temp;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	print(a, la);
}

int print(int a[], int la) {
	int i = 0;
	for(i = 0; i < la; i++) {
		printf("%d\t",a[i]);
	}
	printf("\n");
}

int main(void) {
	int a[] = {23, 45, 66, 778, 45, 645, 22}, b[] = {3, 565, 666, 323, 34, 45, 33, 32};
	int la = sizeof(a)/sizeof(a[0]);
	int lb = sizeof(b)/sizeof(b[0]);
	selectsort(b, lb);
	return 0;
}