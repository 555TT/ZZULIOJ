#include<stdio.h>
int main()
{
	int a[30][32];
	int n; scanf("%d", &n);
	a[0][1] = 1;
	for (int i = 0; i < n; i++)
	{
		a[i][0] = 0;
		a[i][i + 2] = 0;
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 1; j <= i + 2; j++)
		{
			a[i + 1][j] = a[i][j - 1] + a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= i + 1; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}
