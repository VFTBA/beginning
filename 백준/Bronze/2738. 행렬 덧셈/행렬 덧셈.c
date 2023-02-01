#include <stdio.h>
int main() {
	int n, m;
	int a[100][100];
	int b[100][100];
	int e = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (int k = 0; k < n; k++) {
		for (int l = 0; l < m; l++) {
			scanf("%d", &b[k][l]);
			
		}
	}

	for (int p = 0; p < n; p++) {
		for (int q = 0; q < m; q++) {
			e = a[p][q] + b[p][q];
			printf("%d\n", e);
		}
	}



}
