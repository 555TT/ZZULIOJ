#define N 10
#include<stdio.h>
int main()
{
	int IsUpperTriMatrix(int a[][N], int n);
	int n; scanf("%d", &n);
	int a[10][10];
	for (int i = 0; i < n; i++)	
	{
		for (int j = 0; j < n; j++)
			scanf("%d", *(a + i) + j);
	}
	if(IsUpperTriMatrix(a,n))
		printf("YES");
	else
		printf("NO");
		return 0;
}
int IsUpperTriMatrix(int a[][N], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i][j] != 0)
				flag = 1;
		}
	}
	if (flag == 0)
		return 1;
	else
		return 0;
}
