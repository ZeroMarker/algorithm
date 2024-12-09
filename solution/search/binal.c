#include <stdio.h>

int binal(int* a, int len, int target){
	int low = 0, high = len -1;
	int pos = 0;
	for(int mid = (low + high) / 2; low <= high;){
		if(target > a[mid]){
			low = mid;
		}
		else{
			high = mid;
		}
		if(target == a[mid]){
			pos = mid;
		}
	}
	return pos;
}
int main(void){
	int a[5] = {1, 3, 6, 8, 9};
	int target = 3;
	int len = sizeof(a) / sizeof(a[0]);
	int pos = binal(a, len, target);
	printf("%d", pos);
	return 0;
}
