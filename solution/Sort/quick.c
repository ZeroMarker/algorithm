#include<stdio.h>
 
void quicksort(int s[], int l, int r)
{
    if (l < r)
    {
        //Swap(s[l], s[(l + r) / 2]);
        int i = l, j = r, x = s[l];
        while (i < j)
        {
            while(i < j && s[j] >= x)
                j--;  
            if(i < j) 
                s[i++] = s[j];
            
            while(i < j && s[i] < x)
                i++;  
            if(i < j) 
                s[j--] = s[i];
        }
        s[i] = x;
        quicksort(s, l, i - 1); 
        quicksort(s, i + 1, r);
    }
}
 
int print(int a[], int len) {
	int i;
	for(i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
}
int main(void) {
	int a[] = {23, 56, 43, 2, 5, 645, 243};
	int len = sizeof(a)/sizeof(a[0]); 
	quicksort(a, 0, len - 1);
	print(a, len);
	return 0;
}