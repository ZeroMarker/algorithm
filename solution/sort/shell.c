#include <stdio.h>

void shellsort(int a[], int la) {
	int i = 0;
	int gap;
	for(gap = la/2; gap > 0; gap = gap/2) {
		for(i = gap; i < la; i++) {
			int j = i;
			int temp = a[i];
			while(j-gap >= 0 && temp < a[j-gap]) {
				a[j] = a[j-gap];
				j = j - gap;
			}
			a[j] = temp;
		}
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
	shellsort(a, la);
	return 0;
}