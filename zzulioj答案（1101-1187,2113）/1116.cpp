#include<stdio.h>
void del(int a[], int n, int i)
{
	for(;i<=n-1;i++)
	{
		a[i]=a[i+1];
	}
}
void PrintArr(int a[], int n)
{
	for(int i=0;i<=n-2;i++)
	{
		printf("%d", a[i]);
		if(i!=n-1)
		printf(" ");
	}
}
int main()
{
	int n,a[100], i;
	scanf("%d", &n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &i);
	del(a, n,i);
	PrintArr(a, n);
	return 0;
}
