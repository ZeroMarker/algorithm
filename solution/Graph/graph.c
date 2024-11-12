//adjacency matrix degree
#include <stdio.h> 

void matrix(int m, int n){
	int i,j;
	int a[m][m];
	int out,in;
	int o, p;
	for(j = 0; j < m; j++) {
		for(i = 0; i < m; i++) {
			a[i][j] = 0;
		}
	}
	for(i = 0; i < n; i++) {
		scanf("%d%d", &o, &p);
		a[o-1][p-1] = 1;
	}
	for(i = 0; i < m; i++) {
		out = 0;
		for(j = 0; j < m; j++) {
			out += a[i][j];
		}
		printf("%d\t", out);
	}
	printf("\n\n");
	for(j = 0; j < m; j++) {
		in = 0;
		for(i = 0; i < m; i++) {
			in += a[i][j];
		}
		printf("%d\t", out);
	}
}
int main(void) {
	int m, n;
	scanf("%d%d", &m, &n);
	matrix(m, n);
	return 0;
}


