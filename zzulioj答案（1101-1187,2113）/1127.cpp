#include<stdio.h>
int main() {
	int n, m, p;
	scanf("%d%d%d", &m, &p, &n);
	int a[10][10], b[10][10];
	for (int i = 0; i < m; i++) {
		for (int k = 0; k < p; k++)
			scanf("%d", *(a + i) + k);
	}
	for (int i = 0; i < p; i++) {
		for (int k = 0; k < n; k++)
			scanf("%d", *(b + i) + k);
	}
	int sum, t = 0;
	for (int i = 0; i < m; i++) {
		for (int k = 0; k < n; k++) {
			sum = 0;
			for (int j = 0; j < p; j++) {
				sum += a[i][j] * b[j][k];
			}
			printf("%d ", sum);
			t++;
			if (t % n == 0)
				printf("\n");
		}
	}
	return 0;
}
