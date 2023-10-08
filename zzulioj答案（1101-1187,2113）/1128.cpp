#include<stdio.h>
double a[1000][10];
int main(void)
{
	int m, n;
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%lf", &a[i][j]);
	}
	for (int i = 0; i < n; i++)
	{
		double sum = 0;
		for (int j = 0; j < m; j++)
		{
			sum += a[j][i];
		}
		printf("%.2lf ", sum / m);
	}
	return 0;
}
